#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

int main() {

    float a = 1;
    std::cin >> a;

    float b = 2;
    std::cin >> b;

    double x = std::log(1+(a/b));

    std::cout << x << std::endl;

    return 0;
}