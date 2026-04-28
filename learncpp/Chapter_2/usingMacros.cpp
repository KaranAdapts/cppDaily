#include<iostream>

// enables player stats output during debug builds
#define DEV_CHECK_STATS 

float calculateScore(float oldHighScore, float currentScore){

    float newHighScore{};

    // if they beat the old high score, the current running score becomes the new high score
    if(currentScore > oldHighScore){
        newHighScore = currentScore;
        std::cout << "NEW HIGH SCORE ACHIEVED: " << newHighScore << '\n';
    }
    else {
        std::cout << "Aww :( Try again next time! " << '\n' << "Personal Best: " << oldHighScore << '\n';   
    }

    return newHighScore;

}

// checks the score in case a player's score is unusally higher than it's supposed to 
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

    // in case a player has suspicious game activity, the game flags the player for the senior dev to review
    #ifdef SENIOR_DEV_ACCESS 

    if(caughtHacks(currentHigh) == true){
        std::cout << "Suspicious Activity Detected: Review Player stats" << '\n';
    }

    #endif

    return 0;

}