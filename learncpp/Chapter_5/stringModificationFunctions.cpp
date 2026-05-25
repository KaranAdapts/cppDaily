#include<iostream>
#include<string_view> 

// How do String modification functions work? 

int main(){

    std::string_view name{"RedDead"};
    std::cout << name << '\n';

    name.remove_prefix(1);
    std::cout << name << '\n';

    name.remove_suffix(4);
    std::cout << name << '\n';

    name = "RedDead";
    std::cout << name << "\n\n"; // reset it back to the original string 


    // Another example 
    std::string social{"Redis"};
    std::string_view displaySocial{social};

    std::cout << displaySocial << '\n';

    displaySocial.remove_prefix(1); // shifts the start pointer to 1 char from left to right side
    displaySocial.remove_suffix(1); // shifts the end pointer to 1 char from right to left 

    std::cout << displaySocial << '\n';

    return 0;
}