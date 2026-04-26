#include<iostream>

namespace readX{

    int defaultHealth{100};

    int damageNumbers(int damageTaken){
    
        std::cout << "Damage taken: " << damageTaken << '\n';
        return damageTaken;    
    }

    int healthGiven(int healthGiven){
        
        std::cout << "Healing given: " << healthGiven << '\n';
        return healthGiven;   

    }

    int liveHealth(int damageTaken, int healthGiven){

    return defaultHealth - damageTaken + healthGiven;

    }

}

int main(){

    std::cout << "This is how to use a namespace" << '\n';
    readX::healthGiven(25);
    readX::damageNumbers(50);
    std::cout << '\n' << "Current Health: " << readX::liveHealth(50, 25) << '\n';

    
    return 0;

}