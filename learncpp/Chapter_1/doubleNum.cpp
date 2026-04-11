/* This is like a mostly-good version of a solution
   but you can prefer your own style as long as it's readable 
   for example, I prefer to write code my way like I've done in multiIN.cpp */

#include<iostream>

int main() {

    int num{};

    std::cout << "Input a number to be doubled" << "\n";

    std::cin >> num; 

    int doubleNum{ num * 2};
    std::cout << "Double of your number is " << doubleNum << "\n";

    return 0;
}