#include <iostream>
#include <typeinfo>

int main(){

    std::cout << "int → i\ndouble → d\nshort → s\nunsigned int → j\nlong → l\n"; 

    int iX{5};
    std::cout << '\n' << typeid(iX).name() << '\n';

    double dX{1.7};
    std::cout << typeid(dX).name() << '\n';

    std::cout << typeid(iX + dX).name() << ' ' << iX + dX << '\n';

    std::cout << "\nFor Any Numeric Data Type with a lower rank than int gets converted to int unconditionally during conversion\n\n";

    short sX{2};
    short sXR{4};

    std::cout << typeid(sX).name() << '\n';
    std::cout << typeid(sXR).name() << '\n';
    std::cout << typeid(sX + sXR).name() << ' ' << sX + sXR << '\n';    

    return 0;
}