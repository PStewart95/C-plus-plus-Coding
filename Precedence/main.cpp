#include <iostream>

int main() {
    int a =25;
    int b =16;
    int c =9;

    float x = a+b*c;
    std::cout << x << std::endl;
    float y = (a+b)*c;
    std::cout << y << std::endl;
    float z = a+(b*c);
    std::cout << z << std::endl;
    return 0;
}