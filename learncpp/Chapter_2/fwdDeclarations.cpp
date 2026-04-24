#include<iostream>

int calculate(int x, int y, int z); // This is how you use forward declarations to tell the compiler about the existence of a function before it's defined 

int main(){

    std::cout << "Calculating your points: " << calculate(6, 9, 6) << '\n';

    return 0;
}

int calculate(int x, int y, int z){
    
    return  x + y * z;
}