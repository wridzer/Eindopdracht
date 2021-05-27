#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Player.h"
#include "Vector2.h"
#include "Enemy.h"
#include "DeltaTime.h"
#include "Soundmanager.h"
#include <vector>

int main()
{
    DeltaTime* deltaTime = new DeltaTime();

    //Create window
    int windowW = 1280 ;
    int windowH = 940;
    int enimNumber = 10;
    sf::RenderWindow window(sf::VideoMode(windowW, windowH), "pudding met pindakaas smaak");
    std::vector<Enemy> enimList;

    //Create Soundmanager
    Soundmanager* sm = new Soundmanager;

    //Create player
    Player* player = new Player(windowW, windowH);

    //Create enemy
    for (int i = 0; i < enimNumber; ++i) {
        Enemy* enemy = new Enemy(windowW);
        enimList.push_back(*enemy);
    }

    //Game loop
    while (window.isOpen())
    {
        deltaTime->UpdateDT();
        sf::Event event;
        while (window.pollEvent(event))
        {
            //Close window
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                window.close();
            }
            float dest = sf::Mouse::getPosition(window).x;
            player->Move(deltaTime->dt, dest);
        }
        //Enemy loop
        for (int i = 0; i < enimList.size(); ++i) {
            window.draw(enimList[i].Draw(deltaTime->dt));
            //Delete enemy under screen
            if(enimList[i].Draw(deltaTime->dt).getPosition().y > windowH + 10)
            {
                enimList[i].~Enemy();
                enimList.erase(enimList.begin() + i);
                sm->Play("yoda.wav");
            }
            //Collision with player
            if (player->position->Distance(*enimList[i].position, player->playerSize, enimList[i].enimSize) < 0){
                std::cout << "HIT" << std::endl;
                enimList.erase(enimList.begin() + i);
                sm->Play("oof.wav");
            }
        }
        //Add new enemies
        while (enimList.size() < enimNumber) {
            Enemy* enemy = new Enemy(windowW);
            enimList.push_back(*enemy);
        }
        window.draw(player->Draw());
        window.display();
        window.clear();
    }

    return 0;
}
