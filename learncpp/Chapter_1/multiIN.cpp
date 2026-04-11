/* This is a basic program that does multiplication and Squaring, 
thinking of implementing a functionality in the future that could
list "n" number of operations that it can do and what you wanna calculate */

#include<iostream> 

int main(){

    int x{}, y{}, z{}, a{}, b{}, c{};

    std::cout << "Choose your Desired Numbers: " << "\n"; 

    std::cin >> x >> y; 

    std::cout << "Your Desired Numbers are: " << x << " and " << y << "\n"; 

    std::cout << "You want them to multiply? " << "\n";
    std::cout << "Yes? Press 1" << "\n"; 
    std::cout << "No? Press Any Key to Exit" << "\n";
    std::cin >> a;


    if (a == 1) {
        z = x * y;
        std::cout << "Multiplication will be: " << z << "\n";
    }
    else { 
        std::cout << "Aborted";
    }

    std::cout << "\n" << "You wanna Square for a number? " << "\n";
    std::cout << "Yes? Press 1" << "\n" << "No? Press Any Key to Exit" << "\n";
    std::cin >> b;

    if (b == 1) {
        std::cout << "Type the number you wanna Square: " << "\n";
        std::cin >> c;

        std::cout << "Square for " << c << " will be " << c * c << "\n";
    }
    else {
        std::cout << "Aborted"; 
    }

    return 0;
}