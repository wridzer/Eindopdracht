//
// Created by Wridzer on 24/05/2021.
//

#include "Enemy.h"

Enemy::Enemy(int windowW, int windowH) {
    wW = windowW;
    wH = windowH;
}

Enemy::~Enemy() {

}

void Enemy::Move() {
    if (fallSpeed == 0)
    {
        fallSpeed = rand() % 25;
    }
    if (moveSpeed == 0)
    {
        moveSpeed = rand() % 10;
    }
    posY += fallSpeed * 0.01;
    posX += moveSpeed * 0.01;
}

sf::CircleShape Enemy::Draw() {
    Move();
    sf::CircleShape shape(enimSize);
    shape.setFillColor(sf::Color::Red);
    BorderCheck();
    shape.setPosition(posX, posY);
    return shape;
}

void Enemy::BorderCheck() {
    if (posX > wW)
    {
        moveSpeed = moveSpeed *-1;
    }
    if (posX < 0.f)
    {
        moveSpeed = moveSpeed *-1;
    }
}