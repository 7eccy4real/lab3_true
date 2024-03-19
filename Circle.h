#pragma once
#include "Shape2D.h"
#include <iostream>
#include <string>

class Circle : public Shape2D {
private:
    float radius;
public:
    Circle(float radius);
    void CalculateArea() override;
    void Scale(float ScaleFactor) override;
    void ShowInfo() override;
    std::string GetName() override;
};
