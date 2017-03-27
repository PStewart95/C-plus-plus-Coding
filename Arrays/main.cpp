#include <iostream>

int main() {

    int array[10];

    for(int i=1; i<11; ++i)
    array[i]=i;

    for(int i=1; i<11; ++i)
    std::cout << array[i] << std::endl;

    return 0;
}