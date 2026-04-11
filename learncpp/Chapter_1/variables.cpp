#include<iostream>

int main(){ 
    
    /* int width; 
    width = 5; 

    std::cout << width << "\n"; 

    width = 7; 
    std::cout << width; 

    return 0; */

    int width {4}; // Modern way to directly initialize values for variables (preferred) also called direct-list-initialization
    std::cout << "width is equal to "<< width << "\n"; 
    // Shorter version to intialize values for variable by assigning and defining on the same line

    int a{5}, b{6};
    std::cout << a << "\n" << b << "\n";

    [[maybe_unused]] double gravity {10.982689}; 
    [[maybe_unused]] double animations {1.5};

    std::cout << animations << "\n";
    std::cout << gravity;

    return 0;

}

