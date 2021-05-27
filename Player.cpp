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

void Player::Move(float dt, float dest) {
    float dist = dest - posX;
    float acc = dist/moveSpeed;
    posX += acc;
    posY = wH - bottemPos;
    position = new Vector2(posX, posY);
}

sf::CircleShape Player::Draw() {
    sf::CircleShape shape(playerSize);
    shape.setFillColor(sf::Color::Cyan);
    shape.setPosition(posX, posY);
    return shape;
}
