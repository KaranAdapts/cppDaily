#include<iostream>

int main(){

    double d{7/4};
    std::cout << d << '\n'; // this prints as 1 which is wrong but why? double should print as 1 right? 

    double f{7.0/4};
    std::cout << f << '\n'; // this prints 1.75 accurately as for double type division you need atleast one operand to be a floating point number 

    double df{7/4.0}; // this works as well 
    std::cout << df << '\n';

    constexpr int x{ 7 };
    constexpr int y{ 4 };

    std::cout << "int / int = " << x / y << '\n';
    std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
    std::cout << "int / double = " << x / static_cast<double>(y) << '\n';
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';

    int xr{2};
    int yr{5};

    // arithimetic assignment operators 

    xr *= yr; // multiplication assignment : this does xr = xr * yr; 
    std::cout << xr << '\n';
    xr += yr; // addition assignment : this does xr = xr + yr; 
    std::cout << xr << '\n';

    return 0;
}