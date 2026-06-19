#include <iostream>
#include <random>

int main(){

    std::mt19937 mt{};

    std::uniform_int_distribution die12{1, 12}; 

    for(int count{1}; count <= 40; ++count){
        std::cout << die12(mt) << '\t'; // also by the way we're taking the engine as an input for the uniform distribution and not the other way around
        // we're asking die12 to take raw generated random numbers from the mt engine and convert it to 1-12 outputting at unbiased distribution
    
        if (count % 10 == 0){
            std::cout << '\n';
        }
    }

    return 0;
}