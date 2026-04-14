#include<iostream>

// Functions should always be declared outside the main() function for better readability and as a good practice 

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


/* IMPORTANT TIP : main() function is special and must always return int. It's a C++ rule.
 Never use void main, since it violates the rules of standard C++ */
