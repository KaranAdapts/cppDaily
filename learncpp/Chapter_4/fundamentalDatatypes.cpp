#include<iostream>

int main(){

    int intVal{5};
    float floatVal{3.14};
    double doubleVal{3.14159265359};
    long double doublePlusPlus{3.14159265359};
    bool boolVal{true};
    char charVal{'A'};
    
    std::cout << intVal << '\n' << floatVal << '\n' << doubleVal << doublePlusPlus << '\n' << boolVal << '\n' << charVal << '\n' << std::boolalpha << boolVal << '\n';

    return 0;
}