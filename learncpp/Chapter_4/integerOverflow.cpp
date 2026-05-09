#include<iostream>
#include<iomanip>

int main(){

    int exceedMax{2'147'483'649};
    std::cout << std::setw(16) << "Integer Value is: " << exceedMax << " bytes" << '\n';

    return 0;
}