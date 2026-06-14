#include <iostream> 

/* 
Question #2
Write a program that prints out the letters a through z along with their ASCII codes.
 Use a loop variable of type char.
*/

int main(){

    char fakeChar{'a'};

    while (fakeChar <= 'z'){
    std::cout << fakeChar << " has ASCII Code ";
    std::cout << static_cast<int>(fakeChar) << '\n';
    ++fakeChar;
    }

    return 0;
}