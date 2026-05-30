#include<iostream>

int takeInput(){

    std::cout << "Enter an Integer: "; 
    int input{};
    std::cin >> input;

    return input;
}

int main(){

    int x{takeInput()};
    int y{takeInput()};

    // asks if x is not greater than y, try to input some number which has x greater than y and not 0
    if (!x > y){ // logical NOT operator has a higher precedence than the greater than operator
        std::cout << x << " is not greater than " << y << '\n';
    }
    else { // making it evaulate !x which evaluates to 0 since x is non-zero so it flips to 0 first, making 0 > y = false hence, the else block runs 
        std::cout << '\n' << x << " is greater than " << y << "\n\n";
    }

    if (!(x > y)){ // paranthesis has the highest precedence hence anything inside it is to be evaulated first, now it'll execute the if block right as it is
        std::cout << x << " is not greater than " << y << '\n';
    }
    else { 
        std::cout << x << " is greater than " << y << "\n\n";
    }

    if (y > 10 && y < 20  && y != x){
        std::cout << "You are safe! ";
    } else {
        std::cout << "Skinwalker detected! Stay Safe!";
    }

    return 0;
}