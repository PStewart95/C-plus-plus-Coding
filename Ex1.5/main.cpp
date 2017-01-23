#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

int main() {

    float u = 1;
    std::cin >> u;

    float theta = 2;
    std::cin >> theta;

    float h = 3;
    std::cin >> h;

    double f = std::cos(theta);
    double x = u*f;

    std::cout << x << std::endl;

    double p = std::sin(theta);
    double y = u*p;

    std::cout << y << std::endl;

    int a = -10;
    double t = -y / a;
    std::cout << t << std::endl;

    double s = y*t + (a*t*t*0.5);
    double d = h+s;
    std::cout << d << std::endl;

    return 0;
}