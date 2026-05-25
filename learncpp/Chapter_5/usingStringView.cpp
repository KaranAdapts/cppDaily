#include<iostream>
#include<string_view>

void printString(std::string_view userName){
    std::cout << userName << '\n';
}

int main(){

    std::string_view userName{"Karan Phadtare"}; // std::string_view doesn't let you modify it though
    printString(userName); // doesn't make another copy just to read the string 

    std::string dayOfTheWeek{"Sunday"};
    printString(dayOfTheWeek);

    std::string_view dayToday{dayOfTheWeek}; // can be initialized by another string as well 
    printString(dayToday);

    std::string_view initString{userName}; // can be initialized by another string view as well 
    printString(initString);

    printString(static_cast<std::string>(userName)); 

    std::string_view justName{"Bruce"};
    printString(justName);
    justName = "Alexander"; 
    std::cout << justName;

    return 0;
}