//
// Created by wridz on 23/05/2021.
//

#pragma  once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Vector2.h"
#include "time.h"


class Player {
    public:
        Player(int windowW, int windowH);
        ~Player();
        void Move();
        sf::CircleShape Draw();
        void BorderCheck();

    private:
        int playerSize = 20;
        float posX = 200;
        float posY = 200;
        float moveSpeed = 10; // calculate time
        sf::CircleShape shape;
        int wW;
        int wH;
};


