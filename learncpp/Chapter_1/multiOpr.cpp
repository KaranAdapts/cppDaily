/* learncpp's Chapter 1 Quiz question #3. 

"Write a program that asks the user to enter a number,
and then enter a second number.
The program should tell the user what the result 
of adding and subtracting the two numbers is." 

*checking the solution* 

Functionally identical but they declared the variable before they used it. 
This is a better practice in C++, I'll make sure to learn from this!

If you wanna take a look at what the better practice looks like... 
refer to declVar.cpp to know the modern way of writing the same program.
*/

#include<iostream>

int main(){

    int x{}, y{};

    std::cout << "Enter an integer: ";
    std::cin >> x; 

    std::cout << "Enter another integer: "; 
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y <<".\n";
    std::cout << x << " - " << y << " is " << x - y <<".\n";

    return 0;
}