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
        void Move(float dt, float dest);
        sf::CircleShape Draw();
        Vector2* position;
        int playerSize = 20;

    private:
        float posX = 200;
        float posY = 800;
        float bottemPos = 50;
        float moveSpeed = 15; // actually its acceleration, higher is slower
        sf::CircleShape shape;
        int wW;
        int wH;
};


