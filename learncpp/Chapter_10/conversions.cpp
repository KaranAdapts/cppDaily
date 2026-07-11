#include <iostream> 

// uncomment the below line and replace MACRO with the Macro that you wanna see errors/effects for
// example: #define NO_EXCEPTION_RULES

// #define MACRO 

int main(){

[[maybe_unused]] int ix{6}; 
[[maybe_unused]] long int liX{666};
[[maybe_unused]] short siX{7};
[[maybe_unused]] double dx{67.0};
[[maybe_unused]] float fx{6.7f};

[[maybe_unused]] constexpr int iConstX{6};
[[maybe_unused]] constexpr long int liConstX{666};
[[maybe_unused]] constexpr double dConstX{67.0};
[[maybe_unused]] constexpr float fConstX{6.7f};

// should throw an error for narrowing conversions : 

#ifdef NO_EXCEPTION_RULES
// conversions with no exception rules for using constexpr
int iFloat{fConstX};
short sFloat{fConstX};
long lDouble{dConstX};

#endif 

// conversions with exception rules using constexpr 

#ifdef FLOATING_FLOATING
// floating point type -> floating point type 
float fDouble{dx};

// floating point type -> floating point type with constexpr
float fConstDouble{dConstX};

#endif

#ifdef INTEGRAL_FLOATING
// integral type -> floating point type 
float fIntegral{ix};
double dIntegral{ix};

// integral type -> floating point type with constexpr
float fConstIntegral{iConstX};
double dConstIntegral{iConstX};

#endif

#ifdef INTEGRAL_INTEGRAL
// integral type -> less rank integral type
short sIntegral{ix};
int iIntegral{liX};
short sLongIntegral{liX};

// integral type -> less rank integral type but constexpr && in destination type's range
short sConstIntegral{iConstX};
int iConstIntegral{liConstX};
short sConstLongIntegral{liConstX};

// less rank integral type -> upper rank integral type 
long int lIntegral{ix};
int iShortIntegral{siX};

#endif


return 0;
}