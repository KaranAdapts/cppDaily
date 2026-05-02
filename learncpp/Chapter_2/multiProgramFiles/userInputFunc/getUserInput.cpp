#include <iostream> // forgot to add iostream here, very necessary in case of output and input 

// learncpp quiz time question unit - 2.8 

int getUserInput(){

    std::cout << "Enter a Number to add: ";
    int x{};
    std::cin >> x; 

    return x;

}