#include <iostream> 

/*
Question #3

Invert the nested loops example so it prints the following:

5 4 3 2 1
4 3 2 1
3 2 1
2 1
1 
*/

int main(){

    int outer{5}; // take a note that outer's value becomes the starting number for count's loop to execute 
    while (outer >= 1){

    int count{outer}; // I spent my half an hour for this just because I didn't initialize it with outer
    while (count >= 1){
    std::cout << count << ' '; 
    --count;
    }

    std::cout << '\n';
    --outer; 
}


    return 0;
}