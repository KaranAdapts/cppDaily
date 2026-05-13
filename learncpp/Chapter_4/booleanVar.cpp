#include<iostream>

int main(){

    std::cout << "True will print as: " << true << '\n';
    std::cout << "False will print as: " << !true << '\n'; // the logical NOT operator : "!" is used to flip the sign value

    std::cout << std::boolalpha;

    bool falseVal{false}; 
    std::cout << falseVal << '\n';
    std::cout << !falseVal << '\n';

    return 0;
}