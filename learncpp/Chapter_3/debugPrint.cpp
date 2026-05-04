#include<iostream>

// Simple program to demonstrate how to use debug statements 

int add(int x, int y){

std::cerr << "add() called (x= " << x << ", y= " << ")\n";
    return x + y; 

}

int getUserInput(){
std::cerr << "getUserInput() called" << '\n';
    std::cout << "Enter an Integer: ";
    int inputValue{};
    std::cin >> inputValue;

    return --inputValue; 

}

void printValue(int valueZ){
std::cerr << "printValue() called (z= " << valueZ << ")" <<'\n';
    std::cout << "Addition of two integers results in: " << valueZ << '\n';

}

int main(){

    int valueX{getUserInput()};
    int valueY{getUserInput()};

    int valueZ{add(valueX, 10)};

    printValue(valueZ);

    return 0;

}