//
// Created by Wridzer on 24/05/2021.
//

#include "Enemy.h"

Enemy::Enemy(int windowW) {
    wW = windowW;
}

Enemy::~Enemy() {

}

void Enemy::Move(float dt) {
    if (fallSpeed <= minSpeed)
    {
        fallSpeed = rand() % 50;
    }
    if (moveSpeed == 0)
    {
        moveSpeed = rand() % 10;
    }
    posY += fallSpeed * dt;
    posX += moveSpeed * dt;
    position = new Vector2(posX, posY);
}

sf::CircleShape Enemy::Draw(float dt) {
    Move(dt);
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