    #include<iostream>

    int takeInput(){

        std::cout << "Enter an Integer: "; 
        int x{};
        std::cin >> x;

        return x;
    }

    int main(){

        int x{takeInput()};
        int y{takeInput()};

        int max{(x > y) ? x : y}; 

        std::cout << "The Max of " << x << " and " << y << " is " << max << '\n';

        constexpr bool inBigClassroom{false};
        // how to use a conditional operator to initialize a variable's value using a conditional statement. 
        constexpr int classSize{(inBigClassroom) ? 30 : 20}; 

        std::cout << classSize << '\n'; // will print 20 since inBigClassropom is false, hence the first statement gets skipped 


        return 0;
    }