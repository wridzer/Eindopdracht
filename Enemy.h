//
// Created by Wridzer on 24/05/2021.
//

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Vector2.h"

class Enemy {
    public:
        Enemy(int windowW);
        ~Enemy();
        void Move(float dt);
        sf::CircleShape Draw(float dt);
        void BorderCheck();
        Vector2* position;
        int enimSize = 10;

    private:
        int wW;
        float posX = rand() % 1280;
        float posY = -10;
        float moveSpeed = rand() % 50;
        float fallSpeed = rand() % 50;
        float minSpeed = 25;
        sf::CircleShape shape;
};



