#include <iostream> 
#include <cassert>
#include <limits>

void resetInputState(){
    if(std::cin.eof()){
        std::exit(0);
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main(){

    std::cout << "UID Login System \n\n"; 

    std::cout << "Enter Your Division: ";
    char workDiv{};
    std::cin >> workDiv;
    resetInputState();
    while (workDiv < 'A' || workDiv > 'Z'){
        std::cout << "\nInvalid Input!\nEnter a Valid Uppercase Division: ";
        std::cin >> workDiv;
        resetInputState();
    } 

    std::cout << "Work Division " << workDiv << " Selected\n\n";

    std::cout << "Enter Your Roll Number: ";
    int rollNum{};
    std::cin >> rollNum;
    resetInputState();

    while (rollNum < 0 || rollNum > 99){
        std::cout << "\nInvalid Input!\nEnter a Valid Roll Number: ";
        std::cin >> rollNum;
        resetInputState();
    }

    std::cout << "Roll Number " << rollNum <<  " Selected\n\n";

    std::cout << "Enter Your Alloted Team Division: ";
    char teamDiv{};
    std::cin >> teamDiv;
    resetInputState();
    while (teamDiv < 'A' || teamDiv > 'Z'){
        std::cout << "\nInvalid Input!\n Enter a Valid Uppercase Division: ";
        std::cin >> teamDiv;
        resetInputState();
    } 

    // convention does say the condition should come before and the message should come later but I changed it up a little here specifically since it doesn't matter a lot here
    assert("BANNED: X75R (Karan)" && workDiv != 'X' && rollNum != 75 && teamDiv != 'R'); 

    std::cout << "Team Division " << teamDiv <<  " Selected\n\n";

    std::cout << "Login Successful!\nWelcome " << workDiv << rollNum << teamDiv << "!\n";

    return 0;
}
