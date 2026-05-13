#include<iostream>

int main(){

    std::cout << "Enter a boolean value: ";
    bool takeValue{};
    std::cin >> std::boolalpha;
    std::cin >> takeValue;
    std::cout << std::boolalpha;
    std::cout << "You entered: " << takeValue;

    return 0;
}