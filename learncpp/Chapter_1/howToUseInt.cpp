#include<iostream> 

int doubleOf(int x){
    return x * 2;
}


int main() {
int z{ doubleOf(5) }; 
int k{ doubleOf(67) };
std::cout << "Double of 5 will be " << z << "\n"; 
std::cout << "Doubling your 67 (hahaha nice joke) will be " << k << "\n";

return 0; 

}