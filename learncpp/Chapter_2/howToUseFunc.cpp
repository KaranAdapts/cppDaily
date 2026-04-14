#include<iostream>

void myName(){
    std::cout << "Karan\n";
}

void firstYears(){
    std::cout << "Anand\n";
}

void diplomaStudents(){
    std::cout << "Eashaan\n";
    std::cout << "Paresh\n";
    std::cout << "Armaan\n";
    std::cout << "Prince\n";
    std::cout << "Hemal\n";
    std::cout << "Harsh\n";
}

int main() {

    std::cout << "Today's attendance for the names of Students from CSE B: \n";
    myName();
    firstYears();
    diplomaStudents();

    return 0;
}
