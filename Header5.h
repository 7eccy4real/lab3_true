#pragma once
#include "Header4.h"

class TriangularPyramid {
private:
    Triangle baseTriangle;
    float pyramidHeight;

public:
    TriangularPyramid(float _base, float _height, float _pyramidHeight);
    float CalculateVolume() const;
    void ShowInfo() const;
};
TriangularPyramid::TriangularPyramid(float _base, float _height, float _pyramidHeight)
    : baseTriangle(_base, _height), pyramidHeight(_pyramidHeight) {}

float TriangularPyramid::CalculateVolume() const {
    return (baseTriangle.CalculateArea() * pyramidHeight) / 3.0f;
}

void TriangularPyramid::ShowInfo() const {
    std::cout << "I am a triangular pyramid!" << std::endl;
    std::cout << "My volume = " << CalculateVolume() << std::endl;
    baseTriangle.ShowInfo();
}