#include<iostream>

/* I'll explain this in an example why storing the variable is a good practice 
instead of calling the functions repeatedly. Think of it this way : 

You ask the user for an input in squareNum() , now if you call it twice, you ask for the input twice.
Instead why not just store the value into a variable and use it repeatedly whenever you need to? 
Obvious enough right? Now you'd be able to use that calculation/value as data throughout the program stored in a variable */

int squareNum(){ 

    std::cout << "Enter a number to Square: " << "\n";
    int num{}; 
    std::cin >> num; 
    return num * num; 

} // returns the result of the function to the caller 

int main(){
    
    // storeResult borrows the calculations from squareNum succesfully this time, thanks to the function being declared as an int 
    int storeResult = squareNum(); 
    std::cout << "Adding 10 to your Squared number will be: " << storeResult + 10 << "\n";

    return 0;
}
