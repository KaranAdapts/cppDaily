#include<iostream> 

void printInt(int x){

    std::cout << "You entered '" << x << "' "; 
}
int main(){

    std::cout << "Enter a single character: ";
    char ch{};
    std::cin >> ch; 

    std::cout << "You entered '" << ch << "', which has ASCII code " << static_cast<int>(ch) << ".\n" ;

    // Question #2, Modify the program you wrote for quiz #1 to use implicit type conversion instead of static_cast. How many different ways can you think of to do this?
    // My approach : 
    std::cout << "Enter an Integer: "; 
    char charConv{};
    std::cin >> charConv; 

    // input a character over here instead of an integer 
   printInt(charConv);


    return 0;
}