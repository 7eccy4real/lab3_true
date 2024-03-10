#pragma once
#include <string>

class Shape {
public:
    virtual std::string GetName() const = 0;
    virtual float GetArea() const = 0;
    virtual float GetVolume() const {
        return 0; }
    virtual bool operator>(const Shape& other) const = 0;
    virtual bool operator<(const Shape& other) const = 0;
    virtual bool operator==(const Shape& other) const = 0;
    virtual void ShowInfo() const = 0;
};

