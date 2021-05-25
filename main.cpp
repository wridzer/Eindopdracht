#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Vector2.h"
#include "Enemy.h"
#include "DeltaTime.h"
#include <vector>

int main()
{
    DeltaTime* deltaTime = new DeltaTime();

    //Create window
    int windowW = 640;
    int windowH = 480;
    int enimNumber = 5;
    sf::RenderWindow window(sf::VideoMode(windowW, windowH), "pudding met pindakaas smaak");
    std::vector<Enemy> enimList;

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
        for (int i = 0; i < enimList.size(); ++i) {
            window.draw(enimList[i].Draw(deltaTime->dt));
            if(enimList[i].Draw(deltaTime->dt).getPosition().y > windowH + 10)
            {
                enimList.erase(enimList.begin() + i);
            }
            if (player->position->Distance(*enimList[i].position, player->playerSize, enimList[i].enimSize) < 0){
                std::cout << "HIT" << std::endl;
                enimList.erase(enimList.begin() + i);
            }
        }

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
