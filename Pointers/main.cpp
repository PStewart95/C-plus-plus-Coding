#include <iostream>

int main() {

    float i = 10;
    float *p = &i;
    float g = *p;

    std::cout << i << ' ' << *p << ' ' << g << ' ' << std::endl;

    return 0;
}