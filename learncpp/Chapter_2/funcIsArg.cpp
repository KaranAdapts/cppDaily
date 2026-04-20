#include<iostream>

// You can pass arguments by the return value of another function directly 

int thisNum(){
    std::cout << "Enter your number to be doubled: " << '\n';
    int input{}; 
    std::cin >> input; 

    return input;
}

void doubleNum(int value){
    std::cout << value << " doubled is " << value * 2 << '\n';
}

int main() {
    doubleNum( thisNum()); // initalized doubleNum by the input value of thisNum() itself no need for another variable

    return 0;
}