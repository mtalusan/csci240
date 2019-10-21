#include <iostream>
#include <cstdlib>

using namespace std;

int spinWheel(); // Creating function prototypes
char betOptionsMenu();
int getSingleNum();
char getPocketColor(int pocketNum);
char getPocketEvenOdd(int pocketNum);
void displayWheelResult(char type, int pocketNum);


int main()
{
	srand(6);
	int pocketNum;
	char bettingChoice;
	
	bettingChoice = betOptionsMenu();
	cout << bettingChoice;
	
}

int spinWheel()
{
	int pocketNum = rand() % 36;
	return pocketNum;
}

char betOptionsMenu() // player decides what type of bet they want to place. Single number, red, black, even, or odd
{
	char bettingChoice;
	cout << "What type of bet would you like?" << endl << "   (S = single number, R = red, B = black, E = even, O = odd, Q = quit the game): ";
	cin >> bettingChoice;
	
	// error checking input and reprompting if necessary
	while ( bettingChoice != 'S'  and bettingChoice != 's' and bettingChoice != 'R' and bettingChoice != 'r' and bettingChoice != 'B' and bettingChoice != 'b' and bettingChoice != 'E' and bettingChoice != 'e' and bettingChoice != 'O' and bettingChoice != 'o' and bettingChoice != 'Q' and bettingChoice != 'q' )
	{
		cout << "Invalid option. Try Again: ";
		cin >> bettingChoice;
	}
	
	return bettingChoice;
}	

// Getting user input if thet choose to bet on a single number
int getSingleNum()
{
	int numBet;
	cout << "\nWhat number would you like to bet on (0-36)? ";
	cin >> numBet;
	
	while ( numBet > 0 or numBet < 36 )
	{
		cout << "Invalid option. Try Again: ";
		cin >> numBet;
	}
	
	return numBet;
}

// Deciding the color of the pocket the ball lands in
char getPocketColor(int pocketNum)
{
	if ( pocket
}
