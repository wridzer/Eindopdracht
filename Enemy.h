//
// Created by Wridzer on 24/05/2021.
//

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Vector2.h"

class Enemy {
    public:
        Enemy(int windowW, int windowH);
        ~Enemy();
        void Move();
        sf::CircleShape Draw();
        void BorderCheck();
        Vector2* position = new Vector2(posX, posY);

    private:
        int enimSize = 10;
        float posX = rand() % 600;
        float posY = -10;
        float moveSpeed = rand() % 10;
        float fallSpeed = rand() % 25;
        sf::CircleShape shape;
        int wW;
        int wH;
};



