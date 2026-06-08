#include <iostream>

namespace V1 {
    void printVer(){
    std::cout << "You're at Version 1\n";
}
}
    
inline namespace V2 {
    void printVer(){
    std::cout << "You're at Version 2\n";
    }
}
#ifdef UNNAMED_NAMESPACE // remove the preprocessor conditionals only if you wanna see how the compiler throws an error for this 
namespace {

    void printVer(){
    std::cout << "You're at Version unnamed\n";
    }
}
#endif

int main(){

    V1::printVer();
    printVer();

    return 0;
}