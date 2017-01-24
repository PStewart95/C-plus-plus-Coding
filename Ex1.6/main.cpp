#include <iostream>

int main() {

    int a;
    std::cin>>a;
    for(int i=1;i<13;++i)
    { std::cout<<i<<" x "<<a<<" = "<<(i*a)<<"\n";}
    return 0;
}