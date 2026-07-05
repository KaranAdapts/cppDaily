#include <iostream>

/* 
Quiz time

Warning: The quizzes start getting harder from this point forward, but you can do it. Let’s rock these quizzes!

Question #1

In lesson 4.x -- Chapter 4 summary and quiz, we wrote a program to simulate a ball falling off of a tower.
 Because we didn’t have loops yet, the ball could only fall for 5 seconds.

Take the program below and modify it so that the ball falls for as many seconds as needed until it reaches the ground.
Update the program to use all covered best practices (namespaces, constexpr, etc…).
*/


// Gets tower height from user and returns it
double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// Returns the current ball height after "seconds" seconds
double calculateBallHeight(double towerHeight, int seconds)
{
	const double gravity { 9.8 };

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	const double fallDistance { gravity * (seconds * seconds) / 2.0 };
	const double ballHeight { towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
	const double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);
}

int main()
{
	const double towerHeight{getTowerHeight()};
    double decreasingBallHeight{calculateBallHeight(towerHeight, 0.0)};
    
    for (int secondsPassed{0}; decreasingBallHeight >= 0.0; ++secondsPassed){   
    
    if (decreasingBallHeight <= 0.0){
    std::cout << "At " << secondsPassed << " seconds, the ball is on the ground.\n";
    }

    decreasingBallHeight = calculateBallHeight(towerHeight, secondsPassed);
    std::cout << "At " << secondsPassed << " seconds, the ball is at height: " << decreasingBallHeight << " meters\n"; 
    }


	return 0;
}