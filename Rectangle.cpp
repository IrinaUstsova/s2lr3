#include "Rectangle.h"

Rectangle::Rectangle() : _a(0), _b(0) {}

Rectangle::Rectangle(double a, double b) : _a(a), _b(b) {}

double Rectangle::perim() {
    return (_a + _b) * 2;
}

void Rectangle::print(std::ostream &out) {
    out << "A = " << _a << "; B = " << _b << "\nPerimeter: " << perim() << std::endl;
}
