//
// Created by wridz on 23/05/2021.
//

#pragma  once
#include <SFML/Graphics.hpp>
#include "Vector2.h"


class Player {
    public:
        Player();
        ~Player();
        void Move();
        sf::CircleShape Draw();

    private:
        int playerSize = 20;
        float posX = 200;
        float posY = 200;
        float moveSpeed = 10;
        sf::CircleShape shape;
};


