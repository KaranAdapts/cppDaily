#include <iostream>

int main(){

    for (int count{0}; count < 10; ++count){

        if ((count % 2 == 0)){
            continue;
        }
        
        std::cout << count << '\n';
    }

    return 0;
}