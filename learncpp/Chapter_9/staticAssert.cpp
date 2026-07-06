#include <iostream>

int main(){

    int rollNum1{1};
    std::cout << "Permitted, Please Enter!\n";

    constexpr int rollNum75{75};
    // this program won't even run due to static assert's compile-time condition check 
    //and throws an error while you're writing the program before you even compile or run it
    static_assert(rollNum75 != 75, "Student 75 is Banned from Classroom"); 

    return 0;
}