#include<iostream>

int getUserInput(){

    std::cout << "Enter a Number: " << '\n';
    int input{};
    std::cin >> input; 
    return input; // note: return is very necessary if you intend to pass the value to anything 
}

int main(){

    int userInput{ getUserInput() }; // initialized the variable userInput with a return value of getUserInput() function 
    std::cout << "Your Number " << userInput << " doubled is " << userInput * 2 << '\n';

    return 0; 
}