#include<iostream>

// Parameters = Placeholders, meawhile Arguments = Actual values 

int addTwo(int x, int y){ // added two parameters to make sure two values have to be given in order to perform addition operation

    return x + y; 
}

void luckyNum(int x){ // added one parameter to have a value to be printed 

    std::cout << x << '\n';  
}

int main(){ 

    addTwo(6, 3); // returned a value but caller didn't do anything with it so discarded
    std::cout << addTwo(6, 3) << '\n';  // printed the computed value to the console while passing two arguments as 6 and 3
    luckyNum(7); // passed 7 as an argument 
}