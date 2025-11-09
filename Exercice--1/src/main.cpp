#include <iostream>
#include "Point3D.h"

int main() {
    Point3D p1(1.0, 2.0, 3.0);
    Point3D p2(4.0, 5.0, 6.0);

    std::cout << "Point 1 : (" << p1.getX() << ", " << p1.getY() << ", " << p1.getZ() << ")\n";
    std::cout << "Point 2 : (" << p2.getX() << ", " << p2.getY() << ", " << p2.getZ() << ")\n";

    return 0;
}
