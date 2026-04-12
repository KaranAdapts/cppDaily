/* There is no change in the functionality or logic of the program,
however declaring the variable close to its first use helps with 
understanding and tracking the code knowing where it got used. */

#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	
	// declared close to first use for better tracking
	int x{}; 
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{}; 
	std::cin >> y;

	std::cout << x << " + " << y << " is " << x + y << ".\n";
	std::cout << x << " - " << y << " is " << x - y << ".\n";

	return 0;
}