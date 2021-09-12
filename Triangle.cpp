#include "Triangle.h"

Triangle::Triangle() : _a(0), _b(0), _c(0) {}

Triangle::Triangle(double a, double b, double c) : _a(a), _b(b), _c(c) {}

double Triangle::perim() {
    return _a + _b + _c;
}

void Triangle::print(std::ostream& out) {
    out << "A = " << _a << "; B = " << _b << "; C = " << _c << "\nPerimeter: " << perim() << std::endl;
}
