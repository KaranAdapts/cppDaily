#include<iostream>

// Simple program to demonstrate how to use debug statements 

int add(int x, int y){

std::cerr << "add() called (x = " << x << ", y = " << y << ")\n";
    return x + y; 

}

int getUserInput(){
std::cerr << "getUserInput() called" << '\n'; 
    std::cout << "Enter an Integer: ";
    int inputValue{};
    std::cin >> inputValue;

    return --inputValue; // decrement operator used is a bug 

}

void printValue(int valueZ){
std::cerr << "printValue() called (z = " << valueZ << ")" <<'\n';
    std::cout << "Addition of two integers results in: " << valueZ << '\n';

}

int main(){

std::cerr << "main() called" << '\n';
    int valueX{getUserInput()};
std::cerr << "main::valueX = " << valueX << '\n';
    int valueY{getUserInput()};
std::cerr << "main::valueY = " << valueY << '\n';    



    int valueZ{add(valueX, 10)}; // used a literal as an argument instead of using valueY as argument 
std::cerr << "main::valueZ = " << valueZ << '\n';   

// expected: valueX + valueY, actual: (valueX - 1) + 10 
    printValue(valueZ); // the printed value won't be the one expected since we unintentionally used a literal as argument

    return 0;

}