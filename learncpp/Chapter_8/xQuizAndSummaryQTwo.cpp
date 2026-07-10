#include <iostream>

bool isPrime(int x)
{
    // if x is less than 2, return false immediately
    if (x < 2){
        return false;
    }

    // loop from 2 up to x-1
    // if x is evenly divisible by the loop variable, return false
        for (int checkPrime{2}; x > checkPrime; checkPrime++){
            if (x % checkPrime == 0){
                return false;
            } 
        }
    // if we finished the loop without returning false, return true
    return true; 
        
}

int main(){

    std::cout << std::boolalpha << isPrime(17) << '\n';

    return 0;
}