#include <iostream> 

int main(){

    int negativeNum{-5};
    std::cout << static_cast<unsigned int>(negativeNum) << '\n'; 
    std::cout << static_cast<int>(static_cast<unsigned int>(negativeNum)) << '\n';

    return 0;
}