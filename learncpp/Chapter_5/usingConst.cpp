#include<iostream>

int main(){

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age; 

    [[maybe_unused]]const int constAge{age};

    age = age + 1; 

    #ifdef CONST_AGE
     constAge = age + 1;
     // this would result in an error since constAge is initialized as constant age of whatever the output for age is
     // it's now fixed to constAGe and constAge being a constant is read-only variable now, try to run it yourself by remove the ifdef directives 
    #endif

    return 0;
}