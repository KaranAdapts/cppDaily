#include <iostream> 
#include "counter.h"

// Practice program for early Chapter 7 units 


int main(){

    printSession();

    incrementCounter();
    incrementCounter();

    printSession();

    {
        int secret{42};
        std::cout << secret << '\n';
    }

    #ifdef COMMENT
    std::cout << secret; // this throws a compiler error since secret was in a block scope
    #endif

    return 0;
}