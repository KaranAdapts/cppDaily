#include<iostream>

int main() {

    std::cout << "Enter Your Number: ";

    int x{}; // Zero initialization is kinda important
    std::cin >> x; 

    std::cout << "You've Chosen Number: " << x; 
    return 0;
}

/*  // Printing character from input program

#include<iostream> 

int main() { 

    std::cout << "Enter your initial "; 

    char initial{}; 
    std::cin >> initial;

    std::cout << "Good Morning " << initial; 
    return 0;

} 

*/