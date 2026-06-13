#include <iostream> 

// Disclaimer : Mostly never use goto unless you wanna exit a bunch of nested loops cuz the alternative is worse

void skipPrint(){
    
    int x{10};

    if (x == 10)
    goto skipStatement; // goto can be used to jump forward lke this to skip a few lines from executing

    std::cout << "This statement is supposed to be skipped entirely\n"; 

    skipStatement: // statement label used after is to skip a few statements in between when a condition is satisified

    std::cout << "Statement skipped entirely\n";

    int y{}; // make sure you don't skip initialization with a forward goto jump statement cuz the compiler will throw an error
    retryInput: // statement labels used before are used to redo a few statements if condition is satisfied 
    std::cout << "Enter a Positive Integer to continue! \n"; 

    std::cin >> y; 

    if (y < 0)
    goto retryInput; // asks for input once again if y is a negative integer 

}

int main(){

    skipPrint();

    return 0;
}