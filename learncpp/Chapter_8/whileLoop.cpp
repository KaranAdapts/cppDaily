#include <iostream> 

int main(){

    std::cout << "Starting the loop...\n";
    
    int count{0};
    while (count <= 10){
        std::cout << count << " \n";
        ++count; 
    }

    std::cout << "Loop Ended\n";

    // intentional loops 

    while (true){

        std::cout << "Loop again? (y/n)?\n";
        char c{};
        std::cin >> c;

        if (c != 'y'){
            return 0;
        } 

    }

    return 0;
}