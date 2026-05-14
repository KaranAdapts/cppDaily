#include<iostream>

int main(){

    // remember char can only output one char at a time
    char ch{}; 

    std::cout << "Enter a Character: ";
    // try to enter multiple characters over here, for example : ABCD 
    std::cin >> ch; 
    // outputs "A", stores BCD in queue
    std::cout << "You entered: " << ch << '\n'; 

    std::cout  << "Enter a Character: \n";
    // now the next time it asks for character ch's input... it prints "B" without asking the user for input since B is already in queue 
    std::cin >> ch; 
    std::cout << "You entered: " << ch;


    return 0;
}