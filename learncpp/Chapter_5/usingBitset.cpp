#include<iostream>
#include<bitset>


int main(){
    
    std::bitset<8> bin1{0xFF}; // <8> stores exactly 8 bits
    std::bitset<8> bin2{0b0101'1010}; // 0b signifies binary numbers 

    std::cout << bin1 << '\n' << bin2;

    return 0;
}