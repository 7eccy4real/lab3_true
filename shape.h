#pragma once
#include <string>

class Shape {
private:

public:
    virtual void Scale(float ScaleFactor) = 0;
    virtual void ShowInfo() = 0;
    virtual std::string GetName() = 0;
};


