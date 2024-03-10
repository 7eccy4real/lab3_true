#pragma once
#include "Header1.h"

class Shape2D : public Shape {
public:
    float GetVolume() const override { return 0; }
    bool operator>(const Shape& other) const override {
        return GetArea() > other.GetArea();
    }
    bool operator<(const Shape& other) const override {
        return GetArea() < other.GetArea();
    }
    bool operator==(const Shape& other) const override {
        return GetArea() == other.GetArea();
    }
};
