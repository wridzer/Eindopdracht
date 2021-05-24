//
// Created by wridz on 23/05/2021.
//

#include "Player.h"

Player::Player() {
    sf::CircleShape shape(20.f);
    shape.setFillColor(sf::Color::Cyan);
}

Player::~Player() {

}

void Player::Move() {
    // Move right
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        posX += moveSpeed;
    }

    // Move left
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        posX -= moveSpeed;
    }
    // Move up
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        posY -= moveSpeed;
    }

    // Move down
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        posY += moveSpeed;
    }
}

sf::CircleShape Player::Draw() {

}