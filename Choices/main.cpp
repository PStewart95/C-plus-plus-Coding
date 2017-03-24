#include <iostream>

int main() {

    char i = 'x';
    std::cin >> i;

    if (i == 'a') {
        std::cout << "a is for apple" << std::endl;
    } else if (i == 'b') {
        std::cout << "a is for banana" << std::endl;
    } else if (i == 'c') {
        std::cout << "c is for cranberry" << std::endl;
    } else if (i == 'd') {
        std::cout << "d is for date" << std::endl;
    } else {
        std::cout << " I don't know any other fruit" << std::endl;
        return 0;
    }
}