#include <iostream>

// Question #3 : Write a function int accumulate(int x).
// This function should return the sum of all of the values of x that have been passed to this function.

// My approach: overthought it, used conditional comparison
// Simpler approach: static int sum{0}; sum += x; return sum;
int accumulate(int num){ 
    static int previousNumber{num};
    
    if(previousNumber != num){
        int addNum{num + previousNumber};
        previousNumber = addNum;
        return addNum;
    } else {
        return num;
    } 
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}