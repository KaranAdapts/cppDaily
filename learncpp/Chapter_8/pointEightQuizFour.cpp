#include <iostream>

int main()
{
    
    int outer{ 1 };
    while (outer <= 5){
        
        int inner{outer};
        int spaces{0};
         while (spaces < 5 - outer){
                std::cout << "  ";
                ++spaces;
         }
        while (inner >= 1)
        {
            std::cout << inner << ' ';
            --inner;
        }

        std::cout << '\n';
        ++outer;
    } 

    return 0;
}