#include<iostream>
#include "basicMath.h"

void print(){
    std::cout << "there\n"; 
}

namespace nDoSomething
{
    void print(){
        std::cout << "Hello ";
    }

    void printHelloThere(){
        print(); // calls function from the local namespace "nDoSomething" when no scope resolution operator is provided
        ::print(); // skips the local namespace and directly calls the function from the global namespace 
    }
}

int main(){

    nDoSomething::printHelloThere();
    std::cout << basic_math::addTwo(6, 12);

    return 0;
}