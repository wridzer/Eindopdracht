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
    Player* player = new Player();


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
        }

        window.clear();
        window.draw(player->Draw());
        player->Draw().setPosition(posX, posY);
        window.display();
/*
        if (posX > windowW)
        {
            posX = 0.f;
        }
        if (posX < 0.f)
        {
            posX = windowW;
        }
        if (posY > windowH)
        {
            posY = 0.f;
        }
        if (posY < 0.f)
        {
            posY = windowH;
        }*/
    }

    return 0;
}