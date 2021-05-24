//
// Created by wridz on 23/05/2021.
//

#include "Player.h"

Player::Player(int windowW, int windowH) {
    wW = windowW;
    wH = windowH;
}

Player::~Player() {

}

void Player::Move(float dt) {

    // Move right
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        posX += moveSpeed * dt;
    }

    // Move left
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        posX -= moveSpeed * dt;
    }

    // Move up
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        posY -= moveSpeed * dt;
    }

    // Move down
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        posY += moveSpeed * dt;
    }
    position = new Vector2(posX, posY);
}

sf::CircleShape Player::Draw() {
    sf::CircleShape shape(playerSize);
    shape.setFillColor(sf::Color::Cyan);
    BorderCheck();
    shape.setPosition(posX, posY);
    return shape;
}

void Player::BorderCheck() {
    if (posX > wW)
    {
        posX = 0.f;
    }
    if (posX < 0.f)
    {
        posX = wW;
    }
    if (posY > wH)
    {
        posY = 0.f;
    }
    if (posY < 0.f)
    {
        posY = wH;
    }
}
