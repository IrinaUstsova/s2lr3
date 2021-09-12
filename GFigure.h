#ifndef GFIGURE_H
#define GFIGURE_H
#include <iostream>

class GFigure {
public:
    virtual double perim() = 0;
    virtual void print(std::ostream& out) = 0;
};

#endif
