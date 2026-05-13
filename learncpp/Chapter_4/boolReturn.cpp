#include<iostream>

bool boolVal(int x, int y){
    return x == y;
}

int takeInput(){

    int inputVal{};
    std::cin >> inputVal;

    return inputVal;
}

int main(){

    std::cout << "Enter an Integer: ";
    int inputX{takeInput()};
    std::cout << "Enter another Integer: ";
    int inputY{takeInput()};

    std::cout << std::boolalpha;
    std::cout << boolVal(inputX, inputY);

    return 0;
}