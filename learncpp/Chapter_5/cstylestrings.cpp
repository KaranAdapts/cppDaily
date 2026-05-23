#include<iostream>
#include<cstring> 

int main(){

    char name[6] = "Karan"; // a C-style string, fixed size and dangerous to use 
    std::cout << name << '\n';

    strcpy(name, "Toji"); // works 
    std::cout << name << '\n'; 
    
    strcpy(name, "Sukuna"); // can overflow and crash due to overflow in the array 
    std::cout << name;

    return 0;
}