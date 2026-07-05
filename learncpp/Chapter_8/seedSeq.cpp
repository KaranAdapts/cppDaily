#include <iostream>
#include <random> 

int main(){

    std::random_device rd{};
    std::seed_seq ss{rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()};
    std::mt19937 mt{ss};

    std::uniform_int_distribution die12{1, 12};

    for (int count{1}; count <= 20; ++count){
        std::cout << die12(mt) << '\t';

        if (count % 5 == 0){
            std::cout << '\n';
        }
    }
    return 0;
}