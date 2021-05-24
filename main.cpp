#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Vector2.h"

int main()
{
    //Create window
    int windowW = 640;
    int windowH = 480;
    sf::RenderWindow window(sf::VideoMode(windowW, windowH), "pudding met pindakaas smaak");

    //Create Player
    Player* player = new Player(640, 480);


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

        window.draw(player->Draw());
        window.display();
        window.clear();
    }

    return 0;
}