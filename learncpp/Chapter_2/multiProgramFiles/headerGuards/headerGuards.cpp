#include<iostream>
#include "calculateMass.h"
#include "gravityPlusBox.h" // this also includes calculateMass.h in it's program so the header guards prevent it from being defined twice 

// Intentional double inclusion demo — broken by design
// Lesson: this is exactly what header guards prevent
// Don't think too much about this, it's supposed to give an error

int main(){

    std::cout << "Calculate Total Weight: " << massOfAnotherPerson() * gravityPlusBox() << '\n';

    return 0;

}