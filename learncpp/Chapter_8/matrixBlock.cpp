#include <iostream> 

int main(){

    int count{1};
    while (count <= 50){
        
        if(count < 10){
            std::cout << '0';
        }

        // I accidently put the print statement for count after count % 10 which caused it to print the new-line before 10, silly mistake yeah
        std::cout << count << ' '; 

        if(count % 10 == 0){
            std::cout << '\n';
        }

        ++count; 
    }

    return 0;
}