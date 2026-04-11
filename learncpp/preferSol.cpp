/* learncpp says we should prefer to write solution this way,
since the value for num itself won't be altered. 
This is one of the ways you can write your code,
Honestly It's not that hard but I haven't made a program this way myself 
who knows maybe I'll do it in the future sometime? */

#include<iostream>

int main(){

    int num{}; 

    std::cout << "State a number to be doubled: " << "\n";

    std::cin >> num; 

    std::cout << "The double for your number will be: " << num * 2 << "\n";

    return 0;
}