#include<iostream>

void printVal(double x){

    std::cout << x << '\n';
}

int main(){

    printVal(static_cast<int>(5.5));

    char ch{97};
    std::cout << "without static_cast: " << ch << '\n';
    // '\"' is for double quotes, it's an escape sequence... static_cast<int> converts the char expression to an int to output by telling the compiler it's not an implicit conversion
    std::cout << "with static_cast " << '\"' << ch << '\"' << " will be: " << static_cast<int>(ch); 

    return 0;
}