#include <iostream>
#include <random>

// ALternative variation to check for randomness quality, check next comment

int main(){

    std::random_device rd{};
    std::mt19937 mt{rd()};

    std::uniform_int_distribution die12{1, 12}; 

    for(int count{1}; count <= 20; ++count){
        std::cout << die12(mt) << '\t'; // replace die12(mt) with just mt() and you'll see the randomness quality in full numbers

        if (count % 5 == 0){
            std::cout << '\n';
        }
    }

    return 0;
}