#include <iostream>
#include <limits> 

void ignoreOverInput(){
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main(){

    std::cout << "Enter a bool: "; 
    bool b{};
    std::cin >> b;
    std::cout << "Chosen bool is: " << std::boolalpha << b << '\n';
    ignoreOverInput();

    std::cout << "Enter an Integer: ";
    int x{};
    std::cin >> x; 
    std::cout << "Chosen Integer is: " << x << '\n'; 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter a Character: ";
    char c{};
    std::cin >> c;
    std::cout << "Chosen Character is: " << c << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "\nYour Unique ID is: " << std::noboolalpha << b << x << c << '\n';

    return 0;
}