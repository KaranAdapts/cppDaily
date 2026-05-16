#include<iostream>

int takeInput(){

    std::cout << "Enter an Integer (Range 0 - 9): "; 
    int inputVal{};
    std::cin >> inputVal; 

    return inputVal;
}

bool isPrime(int userInput){

    return userInput == 2 || userInput ==  3 || userInput ==  5 || userInput == 7;
}

int main(){

    int userInput{takeInput()};

    if (userInput > 9 || userInput < 0) {
        std::cout << "Out of range";
    }
    else if (isPrime(userInput)){
        std::cout << "The digit is prime";
    }
    else {
        std::cout << "The digit is not a prime";
    }


    return 0;
}