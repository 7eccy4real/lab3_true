#pragma once
#include "Header1.h"
#include "Header2.h"
#include <iostream>
#include <string>

class Triangle {
private:
    float base;
    float height;

public:
    Triangle(float _base, float _height);
    float CalculateArea() const;
    void ShowInfo() const;
};

Triangle::Triangle(float _base, float _height) : base(_base), height(_height) {}

float Triangle::CalculateArea() const {
    return 0.5f * base * height;
}

void Triangle::ShowInfo() const {
    std::cout << "I am a triangle!" << std::endl;
    std::cout << "My area = " << CalculateArea() << std::endl;
    std::cout << "My base length = " << base << std::endl;
    std::cout << "My height = " << height << std::endl;
}
