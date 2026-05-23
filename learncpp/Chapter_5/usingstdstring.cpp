#include<iostream>
#include<string>

void printStudentDetails(std::string name, std::string rollNo){ 
    std::cout << "My Name is " << name << "\nMy Roll number is " << rollNo << "\n\n"; 

}

int main(){

    std::string name{"Karan"};
    std::string rollNo{"21"}; // using rollNo as a string just for an example otherwise we'd use an int
    printStudentDetails(name, rollNo);

    name = "Sasuke";
    rollNo = "7";
    printStudentDetails(name, rollNo);

    std::cout << "New Student details - \n";
    std::cout << "Full Name: ";
    std::cin >> name;
    std::cout << "Roll No: ";
    std::cin >> rollNo;

    printStudentDetails(name, rollNo); // this is gonna be funny

    std::cout << "Re-enter your Name: \n";
    std::getline(std::cin >> std::ws, name);   
    std::cout << "Re-enter your Roll No: \n";
    std::getline(std::cin >> std::ws, rollNo);
    
    return 0;
}