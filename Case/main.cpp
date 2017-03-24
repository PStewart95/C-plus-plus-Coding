#include <iostream>

int main() {

    char i = 'x';
    std::cin >> i;

    switch (i) {
        case 'a':
            std::cout << "a is for apple" << std::endl;
            break;

        case 'b':
            std::cout << "a is for banana" << std::endl;
            break;

        case 'c':
            std::cout << "c is for cranberry" << std::endl;
            break;

        case 'd':
            std::cout << "d is for date" << std::endl;
            break;

        default:
            std::cout << "I don't know any other fruit" << std::endl;
    }
return 0;
}