#include<iostream>

int main(){

    std::uint16_t usInt_16bit{65'535};
    usInt_16bit = usInt_16bit + 3; // converted to 2 since 65538 - 65536 = 2. Hence 2. 

    std::cout << "Overflowing Unsigned Fixed-Width 16-bit Integer: " << usInt_16bit << '\n';

    std::int32_t maxRange{2'147'483'647};
    maxRange = maxRange + 1; // values would just flip to the highest negative number in range. 

    std::cout << "Integer Overflow with Fixed-width 32-bit Integer: " << maxRange << '\n';
 
    return 0;
}