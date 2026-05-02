#include<iostream>

/* This demonstrates the use of multiple code files together 
but I have to manually compile these together for now, 
I'll learn to use CMAKE in some time, it automates compiling multiple code files together 
*/

int calculateScore(int x, int y, int z); // the definition for this function lies in calculateScore.cpp 

int main(){

    std::cout << "Your Score will be: " << calculateScore(2, 6, 9) << '\n';

    return 0;

}