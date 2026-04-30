#include<iostream> // we use angled brackets to tell the compiler to look for this header file in the #include directories, we didn't write this ourselvses 
#include "calculateMarks.h" // we use double quotes to tell the compiler to find the header file in the current directory, this is something we wrote ourselves 



int main(){

    std::cout << "My Total marks is: " << calculateMarks(45, 42, 20); 

    return 0;
}