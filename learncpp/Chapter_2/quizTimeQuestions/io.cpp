#include<iostream>

int readNumber(){

    std::cout << "Enter Integer for addition: ";
    int getUserInput{};
    std::cin >> getUserInput;

    return getUserInput;

}

void writeAnswer(int addResult){

    std::cout << "Adding your two integers would be: " << addResult;

}