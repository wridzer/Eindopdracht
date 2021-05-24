#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Vector2.h"
#include "Enemy.h"
#include <vector>

int main()
{
    //Create window
    int windowW = 640;
    int windowH = 480;
    int enimNumber = 10;
    sf::RenderWindow window(sf::VideoMode(windowW, windowH), "pudding met pindakaas smaak");
    std::vector<Enemy> enimList;

    //Create player
    Player* player = new Player(windowW, windowH);

    //Create enemy
    for (int i = 0; i < enimNumber; ++i) {
        Enemy* enemy = new Enemy(windowW, windowH);
        enimList.push_back(*enemy);
    }

    //Game loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            //Close window
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                window.close();
            }
            player->Move();
        }
        for (int i = 0; i < enimList.size(); ++i) {
            window.draw(enimList[i].Draw());
            if(enimList[i].Draw().getPosition().y > windowH + 10)
            {
                enimList.erase(enimList.begin() + i);
            } 
        }

        while (enimList.size() < enimNumber) {
            Enemy* enemy = new Enemy(windowW, windowH);
            enimList.push_back(*enemy);
        }
        window.draw(player->Draw());
        window.display();
        window.clear();
    }

    return 0;
}