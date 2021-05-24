//
// Created by wridz on 17/05/2021.
//

#include "Vector2.h"

Vector2::Vector2(float Tx, float Ty) {
    x = Tx;
    y = Ty;
    beginX = Tx;
    beginY = Ty;
}

Vector2::~Vector2() {

}

Vector2& Vector2::operator*(const int& i) {
    x = x * i;
    y = y * i;
    return *this;
}

Vector2& Vector2::operator+(const Vector2& v2) {
    x = x + v2.x;
    y = y + v2.y;
    return *this;
}

Vector2& Vector2::operator-(const Vector2& v2) {
    x = x - v2.x;
    y = y - v2.y;
    return *this;
}

float Vector2::Magnitude() {
    float Mx = beginX - x;
    float My = beginY - y;
    float magn = sqrt(std::pow(Mx, 2) + std::pow(My, 2));
    magnitude = magn;
    return magn;
}

float Vector2::Angle() {
    float Mx = beginX - x;
    float My = beginY - y;
    float angle = tan(My/Mx);
    return angle;
}

Vector2& Vector2::Normalize() {
    x = x / magnitude;
    y = y / magnitude;
    return *this;
}

//Getters
float Vector2::GetX() {
    return x;
}

float Vector2::GetY() {
    return y;
}