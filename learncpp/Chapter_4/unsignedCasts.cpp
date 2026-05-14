#include<iostream>

int main(){ 
    
    unsigned int maxRange{4294967295};
    std::cout << static_cast<int>(maxRange) << '\n';

    int negativeNum{-1};
    std::cout << static_cast<unsigned int>(negativeNum);

    return 0;
}