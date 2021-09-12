#include "Triangle.h"
#include "Rectangle.h"
#include <vector>

int main() {
    std::vector<GFigure*> vec;

    Triangle t0(3, 5, 8);
    Rectangle r0(5, 12);
    Triangle t1(8, 15, 2);
    Rectangle r1(7, 3);

    vec.push_back(&t0);
    vec.push_back(&r0);
    vec.push_back(&t1);
    vec.push_back(&r1);

    for (auto* i : vec) {
        i->print(std::cout);
    }
}
