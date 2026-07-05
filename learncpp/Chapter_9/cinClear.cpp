#include <iostream>
#include <limits> 

void resetInputBuffer(){
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
    resetInputBuffer();

    while (c > 'Z' || c < 'A'){
        std::cout << "Out Of Range! Choose a Char between Uppercase A to Z: ";
        std::cin >> c; 
        resetInputBuffer();
    }
    
    std::cout << c << " is the Chosen Char\n\n"; 

    std::cout << "Enter an Integer(Positive and Single-digit): ";
    int x{};
    std::cin >> x;
    while (x > 9 || x < 0){
        std::cout << "Out Of Range! Choose an Integer above 0 and Under 9: ";
        std::cin >> x; 
    } 
    std::cout << x << " is Chosen as integer\n\n";
    resetInputBuffer();
    
    std::cout << "Your UID is " << c << x << '\n';

    return 0;
}