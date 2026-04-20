#include<iostream>

int add(int x, int y){

    return x + y; 
}

int multiply(int x, int y){

    return x * y;
}

int main(){

    std::cout << add(2, 3) << '\n';
    std::cout << add(2 * 3, 5 + 6) << '\n'; // you can also compute vales for an argument when passing them
    std::cout << multiply(2 + 3, 5) << '\n';
    std::cout << add(multiply(5, 4), add(20, 1)) << '\n';
    int a{5};
    std::cout << multiply(add(a, a), multiply(a, a)) << '\n';

    return 0;
}