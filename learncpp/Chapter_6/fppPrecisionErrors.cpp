#include<iostream>

// demonstration of floating point precision errors 

int main(){

    constexpr double d1{100.0 - 99.99}; // should be 0.01 
    constexpr double d2{10.0 - 9.99}; // should be 0.01

    if (d1 == d2){
        std::cout << "d1 == d2\n";}
    else if (d1 > d2){
        std::cout << "d1 > d2\n";}
    else if (d1 < d2){
        std::cout << "d1 < d2\n";}

    return 0;
}