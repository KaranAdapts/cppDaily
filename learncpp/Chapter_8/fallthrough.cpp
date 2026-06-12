#include <iostream>

/*
Quiz time

Question #1

Write a function called calculate() that takes two integers
and a char representing one of the following mathematical operations: +, -, *, /, or % (remainder). 
Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. 
If an invalid operator is passed into the function, the function should print an error message. 
For the division operator, do an integer division, and don’t worry about divide by zero.

Hint: “operator” is a keyword, variables can’t be named “operator”.

*/

int calculate(int x, int y, char c){
    
    switch (c){

        case '+':
        return x + y;

        case '-':
        return x - y; 

        case '*':
        return x * y;

        case '/':
        return x / y; 

        case '%':
        return x % y; 

        default: 
        std::cout << "Invalid Operator!\n";
        return c; 
    }

}

int main(){

    std::cout << calculate(9, 3, '-') << '\n';

    return 0;
}