#include <iostream>

void addAB(float & a, float & b, float & c) {
    c = a + b;
}

int main() {

    float x=10;
    float y=20;
    float z=0;

    std::cout << x << " " << y << " " << z << std::endl;
    addAB(x, y, z);
    std::cout << x << " " << y << " " << z << std::endl;

    return 0;
}