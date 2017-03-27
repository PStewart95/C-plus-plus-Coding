#include <iostream>

void addTen(int & h) {
    h = h + 10;
}
    int main() {

    int i;
    std::cin >> i;
    std::cout << i << std::endl;

    int & h = i;
    std::cout << h << std::endl;

    addTen(h);
    std::cout << i << std::endl;
    std::cout << h << std::endl;

return 0;
}