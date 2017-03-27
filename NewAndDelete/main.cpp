#include <iostream>

int main() {

    int a;
    std::cin >> a;

    float * array = new float [a];

    for(int i=1; i<a+1; ++i)
    array [i]= i;

    for(int i=1; i<a+1; ++i)
    std::cout<< array[i]<< std::endl;

    delete[] array;

return 0;
}