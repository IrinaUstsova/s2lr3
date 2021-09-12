#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "GFigure.h"

class Rectangle : public GFigure {
    double _a, _b;
public:
    Rectangle();
    Rectangle(double a, double b);
    double perim() override;
    void print(std::ostream& out) override;
};

#endif
