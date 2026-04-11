/* learncpp's Chapter 1.11 quiz time question, 
made this using their preferred soltion. Wrote this from scratch, 
let's see if it matches the code they've written. 

*a min later* 

The exact same code, I mean it was a simple program. 
What else can you expect right? */

#include<iostream>

int main(){ 

    int num{}; 

    std::cout << "Enter an integer: " << "\n";

    std::cin >> num; 

    std::cout << "Double " << num << " is: " << num * 2 << "\n";
    std::cout << "Triple " << num << " is " << num * 3 << "\n";

    return 0;
}