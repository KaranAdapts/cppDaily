#include <iostream> 
#include "externVar.h"

int main(){

    std::cout << g_x + g_z << '\n';
    printExternVar();    

    return 0;
}