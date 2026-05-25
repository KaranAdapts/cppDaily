#include<iostream>
#include<string> 

// this program will demonstrate how a dangling view occurs, try to run it and see what the output displays 

std::string_view getDangling()
{
    std::string name{"Karan"}; // local, dies when function returns
    return name; // returning a view of something about to be destroyed
}

int main()
{
    std::string_view sv{getDangling()}; // sv is now dangling
    std::cout << sv; // undefined behavior

    return 0;
}