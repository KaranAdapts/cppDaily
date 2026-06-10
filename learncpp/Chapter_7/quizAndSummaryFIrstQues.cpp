#include <iostream>

int takeInput(){
    std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;
    return num;
}

int main()
{

    int userInput{takeInput()};
	if (userInput < 0)
    {
		std::cout << "Negative number entered.  Making positive.\n";
		userInput = -userInput;
    }

	std::cout << "You entered: " << userInput;

	return 0;
}