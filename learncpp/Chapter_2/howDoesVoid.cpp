#include<iostream> 

/* The problem with using void here is, that it isn't gonna return a value... 
so even if we try to store the result in a variable like 
int storeResult = squareNum();
void returns nothing... so there's no value stored 
and the compiler would throw an error. 
Uncomment lines 18 and 19 to try it out yourself */
void squareNum(){
int num{};
std::cin >> num; 
std::cout << "The Square of your number will be: " << num * num << "\n"; 
} // "num" and calculated result will both die here 

int main(){ 
std::cout << "Enter the number you want to square" << "\n";
squareNum();
// int storeResult = squareNum(); 
// std::cout << "Your stored result is: " << storeResult << "\n";

return 0; 
}