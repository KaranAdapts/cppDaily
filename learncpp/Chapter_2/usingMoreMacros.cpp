#include<iostream> 

#define NORMAL_EVENT

int main(){

    std::cout << "1] Buy Skins: Check Available Skins" << '\n';
    std::cout << "2] SUMMON DIVINE GENERAL MAHORAGA(25% chance per summon)";

    #ifndef NORMAL_EVENT

    std::cout << "1] LIMITED EDITION SKINS! Discount upto 50% off!(Depends on rarity of the skin)" << '\n';
    std::cout << "2] Anniversary Special - SUMMON RYOMEN SUKUNA - DIVINE FLAME(50% chance per summons)"; 

    #endif 


    #if 0 // using #if 1 just flips the switch and enables the code back if needed 

    /* #if 0 completely disables any code inside during the preprocessing stage
    and is useful for disabling large code-blocks including multi-comments like these */

    std::cout << "1] LIMITED EDITION SKINS! Discount upto 50% off!(Depends on rarity of the skin)" << '\n';
    std::cout << "2] Anniversary Special : SUMMON SATORU GOJO - HOLLOW PURPLE(50% chance per summons)";

    /* LIMITED EDITION 2025 Offers : 

    "LIMITED EDITION SKINS! Discount upto 50% off!(Depends on rarity of the skin)"
    "Anniversary Special : SUMMON SATORU GOJO - HOLLOW PURPLE(50% chance per summons)"
    
    Validity Period meant to expire until the end of MAY 2025
    */

    #endif

    return 0;
}