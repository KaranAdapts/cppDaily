#include<iostream>
#include<plog/Log.h>
#include<plog/Initializers/RollingFileInitializer.h> 

int incFunc(int currentLevel){
    PLOGD << "incFunc called()";

    std::cout << "CONGRATS! LEVELED UP!" << '\n';
    std::cout << "Level " << currentLevel << " >> " << currentLevel + 1 << '\n'; 
    std::cout << "Current Level: " << ++currentLevel; 
    PLOGD << "Incremented Current Level to "  << currentLevel;
    
    return currentLevel;

}

int main(){

    plog::init(plog::debug, "LogFunctions.txt");
    PLOGD << "main() called";

    int currentLevel{6};
    incFunc(currentLevel);

    return 0;

}
