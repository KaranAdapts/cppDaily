#include <iostream>

/* DRY stands for "DON'T REPEAT YOURSELF", it's a principle in programming that states 
instead of copy pasting the same logic 5 times, you write it once and reuse it 5 times. 
This also helps with code readability and keeping the code clean. */

int getUserInput(){ 

    std::cout << "Enter an integer: ";
    int input{}; 
    std::cin >> input; 

    return input; 
}

int main(){

    std::cout << "Asking for user input 3 times: " << '\n';

    int x{ getUserInput() }; // initalized 3 variables with a return value using the same function 3 times 
    int y{ getUserInput() };
    int z{ getUserInput() };

    std::cout << "Addition: " << x + y + z << '\n';
    std::cout << "Multiplication: " << x * y * z << '\n';

    return 0;
}