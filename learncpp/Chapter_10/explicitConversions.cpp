#include <iostream> 

int main(){

    [[maybe_unused]] double d{67.7};

    // uncomment the below variable declaration to see the difference 
    // [[maybe_unused]] int n{d}; 
    
    [[maybe_unused]] int scN{static_cast<int>(d)}; // explicitly mentioned by static cast the narrowing conversion being intentional so no compiler error

    return 0;
}