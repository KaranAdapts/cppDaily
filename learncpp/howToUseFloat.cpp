#include<iostream>

float floatOf(float x){
    return x + 0.5; 
}

int IntOf(float y){ 
    return (int)(y + 0.5) ;
}

int main(){ 

    float z{ floatOf(1) }; 
    float i = IntOf(9.5); 
    std::cout << "Your Integer => Decimal = " << z << "\n"; 
    std::cout << "Your Decimal => Integer = " << i << "\n"; 

    return 0;

}