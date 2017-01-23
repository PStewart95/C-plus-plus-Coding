#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

int main() {

    float r = 1;
    std::cin >> r;

    float theta = 2;
    std::cin >> theta;

// if wanting to convert input from radians to degrees, would put theta*(180/Pi) on this line //

    double f = std::cos(theta);
    double t = std::sin(theta);

    double x = r*f;
    double y = r*t;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}