#include<iostream>


int main(){


    // these follow an as-if rule to determine whether it would evaluate at compile-time or not, different compilers, architectures could differ so it's not guaranteed
    const int x{10}; // would get evaluated at compile-time 
    const double d{1.5}; // wouldn't get evaluated at compile-time since it's a non-integral data type
    const int y {static_cast<int>(d + 0.5)}; // woudn't get evaluated at compile-time even if it's an integral data type is cuz the initializer is a non-integral data type
    // const int mt{};  ...  remember this would result in an error since constant expressions are always meant to be intialized with a value 

    // the constexpr, a manifestly constant-evaluated expression guarantees an object to be evaluated at compile-time 
    constexpr int xr{10}; 
    constexpr double dr{1.5};
    constexpr int yr {static_cast<int>(dr + 0.5)};

    return 0;
}