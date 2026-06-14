#include <iostream> 

/*
Quiz time

Question #1

Write a for-loop that prints every even number from 0 to 20.
*/

int main(){

for (int counter{0}; counter <= 20; counter += 2){
    std::cout << "Current Count: " << counter << '\n';
}

return 0;
}