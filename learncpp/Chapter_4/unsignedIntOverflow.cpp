#include<iostream>
#include<iomanip>

int main(){

    unsigned short maxLimit{65535};

    std::cout << "Max limit is: " << maxLimit << '\n';

    maxLimit = 65536; // this divides one greater than the largest max range of 65535 which is + 1 = 65536, the remainder is what is kept

    std::cout << "Overflow for unsigned int short would be: " << maxLimit << '\n';

    maxLimit = 65537; 

    std::cout << "Overflow for unsigned int short would be: " << maxLimit; 

    return 0;
}