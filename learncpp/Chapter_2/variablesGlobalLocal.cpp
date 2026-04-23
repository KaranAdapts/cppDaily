#include<iostream>

// a simple program explaining how global and scope variables behave 

int x{5}; // x{5} is a global variable 

void printVar(){ 

    std::cout << "X is: " << x << "\n";

}

void printX(){

    int x{7};
    std::cout << "X is: " << x << "\n";

}

int main() {

    int x{10}; // local variable since it's inside a function and main() function isn't special here

    // what do you think would print here? 10 or 5? 
    printVar(); // prints 5, since the function would search for it's internal variables if nothing, it would search for global variables 
    printX(); // prints local variable 7, shadows the global variable 

    std::cout << "X is: " << x << "\n"; // prints 10 here 

    return 0;

}