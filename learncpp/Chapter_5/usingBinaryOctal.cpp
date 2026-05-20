#include<iostream> 

int main(){

    int valOctal{012};
    std::cout << valOctal << '\n';
    std::cout << std::oct << valOctal << '\n';

    std::cout << std::dec; // this line defaults it back to decimal, if you remove this... it's gonna print the next number in octal

    int valHex{0xF};
    std::cout << valHex << '\n'; // this actually print 17 for me before cuz std::oct/std::hex is a sticky flag and it print as 17 
    std::cout << std::hex << valHex << '\n';

    std::cout << std::dec; // to reset back anymore ouputs after this point to default to decimal numeral system 

    int valHexMore{0x1F};
    std::cout << valHexMore << '\n';
    std::cout << std::hex << valHexMore << '\n';

    int valDec{24};
    std::cout << valDec;

    return 0;
}