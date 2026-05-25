#include<iostream>

/*
Question #4

Write a program that asks for the name and age of two people, then prints which person is older.

Here is the sample output from one run of the program:

Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).
*/

int main(){

    std::cout << "Enter the name of person #1: ";
    std::string nameP1{};
    std::getline(std::cin >> std::ws, nameP1);

    std::cout << "Enter the age of " << nameP1 << ": ";
    int ageP1{};
    std::cin >> ageP1;


    std::cout << "Enter the name of person #2: ";
    std::string nameP2{};
    std::getline(std::cin >> std::ws, nameP2);

    std::cout << "Enter the age of " << nameP2 << ": ";
    int ageP2{};
    std::cin >> ageP2;

    if (ageP1 > ageP2){
        std::cout << nameP1 << " (age " << ageP1 << ") is older than " << nameP2 << " (age " << ageP2 << ").";

    }
    else {
      std::cout << nameP2 << " (age " << ageP2 << ") is older than " << nameP1 << " (age " << ageP1 << ").";
    }

    return 0;
}