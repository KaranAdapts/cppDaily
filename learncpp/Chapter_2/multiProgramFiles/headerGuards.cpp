#include<iostream>
#include "calculateMass.h"
#include "gravityPlusBox.h"

int main(){

    std::cout << "Calculate Total Weight: " << massOfAnotherPerson(10) * gravityPlusBox() << '\n';

}