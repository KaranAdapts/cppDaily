#include <iostream> 

int chooseBrainRotNumber(){
    std::cout << "Your Brain Rot Options are: \n67\nERROR 404\n";
    int brainRotNum{};
    std::cin >> brainRotNum; 
    return brainRotNum;
}

void switchCase(int x){

    switch(x){

        case 1: 
        std::cout << "You are on the First Position!\nYou earned GOLD!\n";
        break;

        case 2: 
        std::cout << "You are on the Second Position!\nYou earned SILVER!\n\n";
        break;

        case 3: 
        std::cout << "You are on the Third Position!\nYou earned BRONZE!\n";
        break; 

        default: 
        std::cout << "You earned a Participation Medal!\nBetter Luck Next Time!\n";
        break;

    }

    std::cout << "Thank you for Participating in the Marathon!\nBest of Luck for the Future!\n";
    
}

// or you can also start switch cases with whatever number you like 

void getYourBrainRot(int brainRot){

    switch(brainRot){

        case 67:  // could start from 67 if you want to
        std::cout << "Brain Rot Acquired : HAHAHA 67!\n";
        break; 

        case 404: // your next case number could be way far away and the compiler wouldn't care
        std::cout << "Brain Rot Acquired : 404 NOT FOUND! UNLUCKY DUDE!\n";
        break; 

    }

}

int main(){

    switchCase(2);

    getYourBrainRot(chooseBrainRotNumber());

    return 0;
}