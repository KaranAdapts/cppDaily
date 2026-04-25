#include<iostream>

int getUserInput(); // adding forward declaration to link external c++ files is crucial, don't forget this step 

int main(){

    int x{(getUserInput())};
    int y{(getUserInput())};

    std::cout << x << " + " << y << " is " << x + y << '\n';

    return 0;
}