#pragma once
#include "Header1.h"

class Shape3D : public Shape {
public:
    virtual float GetArea() const = 0;
    bool operator>(const Shape& other) const override {
        return GetVolume() > other.GetVolume();
    }
    bool operator<(const Shape& other) const override {
        return GetVolume() < other.GetVolume();
    }
    bool operator==(const Shape& other) const override {
        return GetVolume() == other.GetVolume();
    }
};