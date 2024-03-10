#pragma once
#include <iostream>
#include <cmath>

class Circle {
private:
    float radius;

public:
    Circle(float _radius);
    float CalculateArea() const;
    void ShowInfo() const;
};
