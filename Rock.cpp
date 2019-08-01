//****************************************
// Description: This program will		*
// simulate a game of rock, paper		*
// scissors.							*
// Author: Joshua Ruelas				*
//****************************************

#include <iostream>
#include "game.h"

using namespace std;

int main()
{
	// Initialize variables
	Game play;

	while (true)
	{
		cout << endl << "Rock, Paper, Scissors!" << endl;
		cout << "======================" << endl;

		// Get choice
		play.getChoice();

		// Check for quit
		if (play.exit) return 0;

		// Get results
		play.getResults();

		// Display results
		play.dispResults();

		// Get score
		play.dispScore();
	}

	return 0;
}