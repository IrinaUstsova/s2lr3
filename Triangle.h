#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "GFigure.h"

class Triangle : public GFigure {
    double _a, _b, _c;
public:
    Triangle();
    Triangle(double a, double b, double c);
    double perim() override;
    void print(std::ostream& out) override;
};

#endif
