#include<iostream>

int readNumber(){

    std::cout << "Enter an Integer: ";
    int inputValue{};
    std::cin >> inputValue; 

    return inputValue;

}

void writeAnswer(int sumResult){

    std::cout << '\n' << "Addition Operation: " << sumResult << '\n';

}

int main(){

    std::cout << '\n' << "Executing Addition Operation: " << '\n' << '\n';

    /* I had stored the variables by initalizing two variables with the return value of readNumber() 
     but thought to scrap it since initalizing the return value of readNumber() and adding them right there is clever indeed 
     but readability is a major factor. Also in my code, it isn't guaranteed in what order will readNumber() be called so undefined behaviour is possible. 
     A better practice is to store the return value by initalizing a variable and storing the return value in them and thend doing the addition.*/
    writeAnswer(readNumber() + readNumber()); 

    return 0;

}