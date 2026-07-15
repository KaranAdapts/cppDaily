#include <iostream> 
#include <typeinfo>
#include <string> 
#include <string_view>

auto checkType(auto var){
    std::cout << typeid(var).name() << "\n\n";
    return var; 
}

int main(){

    // to use string and string_view suffixes
    using namespace std::literals;

    auto d{5.0};
    auto i{7};
    auto x{'x'};

    std::cout << "Double: " << d << " and integer: " << i << " char: " << x << '\n';

    std::cout << typeid(d).name() << ' ' << typeid(i).name() << ' ' << typeid(x).name() << "\n\n";

    auto s{"Hello World"}; 
    std::cout << s << '\n';
    checkType(s); 
    // use C++ 20 if you wanna run this 

    auto sX{ "Hello World but string suffix"s };
    std::cout << sX << '\n';
    checkType(sX); // this including the other string_view typeid.name will output a mangled name so don't worry if it looks horrific with string and string view

    auto sv{ "Hello world but string view suffix"sv };
    std::cout << sv << '\n';
    checkType(sv);

    return 0;
}