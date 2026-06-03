#include <iostream>

/*
Question #1

Write a program that asks the user to enter two integers, one named smaller, the other named larger. If the user enters a smaller value for the second integer, use a block and a temporary variable to swap the smaller and larger values. Then print the values of the smaller and larger variables. Add comments to your code indicating where each variable dies. Note: When you print the values, smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.

The program output should match the following:

Enter an integer: 4
Enter a larger integer: 2
Swapping the values
The smaller value is 2
The larger value is 4

Their solution just included an if statement block, I made it a bit complex than it's supposed to be but, 
Here's my first approach :
*/

int takeInput(){
    
    int userInput{};
    std::cin >> userInput;

    return userInput;

}

int main(){

    std::cout << "Enter an Integer: ";
    int smaller{takeInput()};

    std::cout << "Enter a larger integer: ";
    int larger{takeInput()};

    {
        int swapNum{(smaller > larger ? smaller : larger)}; // if user entered larger integer as smaller number instead assign swapNum to the assigned "smaller" variable
        if(swapNum == smaller){
        std::cout << "Swapping the values\n";
        smaller = larger;  // assign larger's value to "smaller" variable
        larger = swapNum; // assign swapNum variable's value to "larger" variable since it currently holds the smaller input
        } // swapNum dies here 
    }

    // swapNum can't be used here since it's destroyed

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';


    return 0;
} // larger and smaller both die here 