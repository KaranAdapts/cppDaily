#include <iostream>
#include "circle.h"

int main(){

    std::cout << "Value of tau is " << tau << '\n';
    double circleOneCircumference{circumference(5)};
    std::cout << "Circumference of your circle would be " << circleOneCircumference << '\n';

    std::cout << "Arc length of your circle at 90 degrees would be " << arcLength(90, circleOneCircumference);

    return 0;
}