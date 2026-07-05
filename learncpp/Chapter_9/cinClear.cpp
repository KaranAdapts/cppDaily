#include <iostream>
#include <limits> 

// Note : Use the input buffer cleanup function as soon as you extract something from input before doing anything with the input

void resetInputBuffer(){
    // adding an eof fail state check is important in cases you wanna shut down the program without input by Ctrl+D (Linux/Mac) or Ctrl+Z + Enter (Windows)
    if (std::cin.eof()){ 
        std::exit(0);
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


int main(){

    std::cout << "Enter a Uppercase Char: "; 
    char c{};
    std::cin >> c; 
    resetInputBuffer(); // clear extraneous input by cin.ignore() + check for eof and reset input state by cin.clear()

    while (c > 'Z' || c < 'A'){
        std::cout << "Out Of Range! Choose a Char between Uppercase A to Z: ";
        std::cin >> c; 
        resetInputBuffer();
    }
    
    std::cout << c << " is the Chosen Char\n\n"; 

    std::cout << "Enter an Integer(Positive and Single-digit): ";
    int x{};
    std::cin >> x;
    resetInputBuffer();

    while (x > 9 || x < 0){
        std::cout << "Out Of Range! Choose an Integer above 0 and Under 9: ";
        std::cin >> x; 
        resetInputBuffer();
    } 
    
    std::cout << x << " is Chosen as integer\n\n";

    std::cout << "Your UID is " << c << x << '\n';

    return 0;
}