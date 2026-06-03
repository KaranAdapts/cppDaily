#include <iostream>
#include "counter.h"

// global session counter 

int g_counter{};
constexpr int maxSession{5};


void incrementCounter(){
    ++g_counter;
}

int getCounter(){
    return g_counter;
}

void printSession(){
    int temp{100};
    std::cout << "Current count: " << getCounter() << '\n';
    std::cout << "Temp: " << temp << '\n';
    std::cout << "Max Session: " << maxSession << '\n';

}
