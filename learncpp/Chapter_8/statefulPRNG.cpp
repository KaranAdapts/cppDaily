#include <iostream>

// just what I tried to make at my first try, nothing to see here 

unsigned int PRNG(){
    static unsigned int s_state{0};

    s_state = s_state * 123456 + 90677949;
    return s_state % 989574324; 
}

int main(){

    for (int count{0}; count <= 100; ++count){
        std::cout << PRNG() << ' ';

        if (count % 10 == 0){
            std::cout << '\n';
        }
    }


    return 0;
}