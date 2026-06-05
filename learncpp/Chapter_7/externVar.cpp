#include <iostream>
#include "externVar.h"

extern const int g_x{10};
extern const int g_z{15};

void printExternVar(){
    std::cout << "using extern for other files to access these variables:\n" << g_x + g_z << '\n';
}
