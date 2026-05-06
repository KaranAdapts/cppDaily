#include<iostream>
#include<plog/Log.h>
#include<plog/Initializers/RollingFileInitializer.h> 

// to test this code out, you gotta add plog library to your include directory or else it won't work 

int incFunc(int currentLevel){
    PLOGD << "incFunc called()"; // adds this logging statement to LogFunctions.txt

    std::cout << "CONGRATS! LEVELED UP!" << '\n';
    std::cout << "Level " << currentLevel << " >> " << currentLevel + 1 << '\n'; 
    std::cout << "Current Level: " << ++currentLevel; 
    PLOGD << "Incremented Current Level to "  << currentLevel;
    
    return currentLevel;

}

int main(){

    plog::init(plog::debug, "LogFunctions.txt"); // initializes the logger and sets the output log file
    PLOGD << "main() called";

    int currentLevel{6};
    incFunc(currentLevel);

    return 0;

}
