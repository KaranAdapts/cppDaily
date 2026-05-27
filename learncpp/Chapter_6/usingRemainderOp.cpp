#include<iostream>

int takeInput(){

    std::cout << "Give a number: ";
    int userInput{};
    std::cin >> userInput;

    return userInput;
}

constexpr bool checkEven(const int x){
    return (x % 2) == 0;
}

int main(){

    int xInput{takeInput()};
    bool x{checkEven(xInput)};

    if (x){
    std::cout << xInput << " is an even number\n";
    }
    else {
    std::cout << xInput << " is an odd number\n"; 
    }

    int yInput{takeInput()};;
    bool y{checkEven(yInput)};

    if (y){
    std::cout << yInput << " is an even number\n";
    }
    else {
    std::cout << yInput << " is an odd number\n"; 
    }

    return 0;
}