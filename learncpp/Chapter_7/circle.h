inline constexpr double tau{6.28318}; // inline exempts this from ODR — every source file gets its own definition, linker deduplicates

inline constexpr double circumference(double radius){ // same for this function 
    return tau * radius;
}

double arcLength(double theta, double circumference); // just forward declares, no duplication of defintion