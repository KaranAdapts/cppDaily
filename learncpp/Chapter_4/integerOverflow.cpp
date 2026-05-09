#include<iostream>
#include<iomanip> // this header file is used for setting width of the output/purely formatting purposes

int main(){

    int exceedMax{2'147'483'647}; // an int can hold values from -2,147,483,648 to 2,147,483,647, getting it out of range results in undefined behaviour
    exceedMax = exceedMax + 1; 
    std::cout << "Integer Overflow: " << std::setw(16) << exceedMax << " integer value" << '\n';

    return 0;
}