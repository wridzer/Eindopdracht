#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Player.h"
#include "Vector2.h"
#include "Enemy.h"
#include "DeltaTime.h"
#include "Soundmanager.h"
#include <vector>
#include "Score.h"
#include "TextInput.h"

int main()
{
    //Time.deltaTime
    DeltaTime* deltaTime = new DeltaTime();

    //Create window
    int windowW = 1280 ;
    int windowH = 940;
    int enimNumber = 10;
    sf::RenderWindow window(sf::VideoMode(windowW, windowH), "pudding met pindakaas smaak");

    //Score
    Score* score = new Score;
    Vector2 scoreTextPos (100, 250);
    sf::Text scoreText;
    TextInput* changeText = new TextInput("sfsdf", sf::Color::Yellow, 500, scoreTextPos);
    scoreText = changeText->returnText();

    //Create Soundmanager
    Soundmanager* sm = new Soundmanager;

    //Create player
    Player* player = new Player(windowW, windowH);

    //Create enemy
    std::vector<Enemy*> enimList;
    for (int i = 0; i < enimNumber; ++i) {
        Enemy* enemy = new Enemy(windowW);
        enimList.push_back(enemy);
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
        }
        //Player input
        float dest = sf::Mouse::getPosition(window).x;
        player->Move(deltaTime->dt, dest);
        //Enemy loop
        for (int i = 0; i < enimList.size(); ++i) {
            window.draw(enimList[i]->Draw(deltaTime->dt));
            //Delete enemy under screen
            if(enimList[i]->Draw(deltaTime->dt).getPosition().y > windowH + 5)
            {
                delete enimList[i];
                enimList.erase(enimList.begin() + i);
                sm->Play("yoda.wav");
                score->RetractScore(1);
            }
            //Collision with player
            if (player->position->Distance(*enimList[i]->position, player->playerSize, enimList[i]->enimSize) < 0){
                delete enimList[i];
                enimList.erase(enimList.begin() + i);
                sm->Play("oof.wav");
                score->AddScore(1);
                enimNumber += 1;
            }
        }
        //Add new enemies
        while (enimList.size() < enimNumber) {
            Enemy* enemy = new Enemy(windowW);
            enimList.push_back(enemy);
        }
        //Draw player
        window.draw(player->Draw());
        //Print score and add to difficulty
        window.draw(scoreText);
        //Die
        if(score->GetScore() < 0)
        {
            //isAlive = false;
        }
        //Display window and clear it
        window.display();
        window.clear();



/*
        //Endgame
        while (!isAlive)
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                //Close window
                if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                {
                    window.close();
                }
                //Restart
                if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::R))
                {
                    while(score->GetScore() < 0)
                    {
                        score->AddScore(1);
                    }
                    if (score->GetScore() >= 0)
                    {
                        isAlive = true;
                    }
                }
            }
            sf::Text endText;
            endText.setFont(font);
            endText.setCharacterSize(50);
            endText.setFillColor(sf::Color::Yellow);
            endText.setPosition(windowW/2, windowH/2);
            endText.setString("GAME OVER");
            window.display();
            window.clear(sf::Color::White);
        }*/
    }

    return 0;
}
