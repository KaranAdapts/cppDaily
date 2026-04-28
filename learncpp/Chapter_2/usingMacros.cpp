#include<iostream>

#define DEV_CHECK_STATS 

float calculateScore(float oldHighScore, float currentScore){

    float newHighScore{};

    if(currentScore > oldHighScore){
        newHighScore = currentScore;
        std::cout << "NEW HIGH SCORE ACHIEVED: " << newHighScore << '\n';
    }
    else {
        std::cout << "Aww :( Try again next time! " << '\n' << "Personal Best: " << oldHighScore << '\n';   
    }

    return newHighScore;

}

bool caughtHacks(float currentHigh) {
    return currentHigh > 999;
}

int main() {
 

    std::cout << "Player's Current Stats: " << '\n';

    float oldHigh{};
    std::cout << "Old High Score: "; 
    std::cin >> oldHigh;

    float currentHigh{};
    std::cout << "Current Score: "; 
    std::cin >> currentHigh;

    calculateScore(oldHigh, currentHigh);

    #ifdef DEV_CHECK_STATS 

    std::cout << "Player Stats: " << '\n';
    std::cout << "Personal Best: " << currentHigh << '\n';
    std::cout << "Previous Best Record: " << oldHigh << '\n'; 

    #endif

    #ifdef SENIOR_DEV_ACCESS 

    if(caughtHacks(currentHigh) == true){
        std::cout << "Suspicious Activity Detected: Review Player stats" << '\n';
    }

    #endif

    return 0;

}