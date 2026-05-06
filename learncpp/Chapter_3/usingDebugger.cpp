#include<iostream>

int incrX(int x){
    return ++x;
}

void printVar(int varX){
    std::cout << varX << '\n';
}

int localVariables(){ 

    int varX{}, y{}, z{};
    varX = 2;
    y = 3;
    varX = 4;
    y = 5; 
    varX = 6; 
    z = 7; 

    return varX; 

}

int main(){

    int x{5};

    x = incrX(x);
    printVar(x);
    x = incrX(x);
    printVar(x);
    x = incrX(x);
    printVar(x);

    localVariables();  // made this function to see the local variable change values in real-time in the watch window 

    return 0;

}