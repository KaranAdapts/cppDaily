#include <iostream> 

int main(){

    typedef double Decimal; 
    using Decimal = double; 

    typedef int Num;
    using Num = int;
    
    // both do the same thing but using aliases can be used with templates and is easier to read 

    Decimal recordTime{1.46};
    Num favNumber{7};

    std::cout << "The current time is: " << recordTime << " and my fav number is " << favNumber << '\n';

    return 0;
}