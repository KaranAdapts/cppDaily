#include <iostream> 

int incrementStreak(){
    static int s_streak{0}; // static variable's data is stored in data segment and destroyed when program ends
    ++s_streak;
    std::cout << "Daily tasks accomplished!\n+1 Streak!\nCurrent Streak: " << s_streak << " Days\n\n";
    return s_streak; 
}

int incrementAltStreak(){
    int streak{0}; // no static keyword hence the variable's life time ends when the function ends 
    ++streak;
    std::cout << "+1 Streak!\nCurrent Streak: " << streak << " Days\n";
    return streak;
}



int main(){

    incrementStreak();
    incrementStreak();
    incrementStreak();

    incrementAltStreak(); // notice the differences in the outputs
    incrementAltStreak();
    incrementAltStreak(); 

    return 0;
}