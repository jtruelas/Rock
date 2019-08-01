#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//****************************************************************
// Definition of Game. Constructor.								*
//****************************************************************

Game::Game()
{
	cpuWins = 0;
	result = -1;
	choice = 'Z';
	playerWins = 0;
	cpuChoice = -1;
	srand(time(0));
}

//****************************************************************
// Definition of getChoice. Function that gets the players		*
// choice and sets the cpu choice.								*
//****************************************************************

void Game::getChoice()
{
	// Get CPU choice
	cpuChoice = 1 + rand() % 3;

	// Prompt user for choice
	cout << "Rock, Paper or Scissors? (R, P, S, Q to quit): ";
	cin >> choice;

	// Check for quit
	if (choice == 'Q' || choice == 'q')
	{
		exit = true;
		return;
	}
}

//****************************************************************
// Definition of getResults. Function that gets the result and	*
// updates the number of wins.									*
//****************************************************************

void Game::getResults()
{
	// Determine wins
	switch (choice) {
	case 'R':
	case 'r':
		switch (cpuChoice) {
		case 1:
			result = 0;
			break;
		case 2:
			result = 1;
			cpuWins++;
			break;
		case 3:
			result = 2;
			playerWins++;
			break;
		}
		break;
	case 'P':
	case 'p':
		switch (cpuChoice) {
		case 1:
			result = 2;
			playerWins++;
			break;
		case 2:
			result = 0;
			break;
		case 3:
			result = 1;
			cpuWins++;
			break;
		}
		break;
	case 'S':
	case 's':
		switch (cpuChoice) {
		case 1:
			result = 1;
			cpuWins++;
			break;
		case 2:
			result = 2;
			playerWins++;
			break;
		case 3:
			result = 0;
		}
		break;
	}
}

//****************************************************************
// Definition of dispResults. Function that displays what was	*
// chosen by the cpu and the player. Then displays result.		*
//****************************************************************

void Game::dispResults()
{
	// Display results
	switch (cpuChoice) {
	case 1:
		switch (choice) {
		case 'R':
		case 'r':
			cout << "Computer chose: Rock, Player chose: Rock" << endl;
			break;
		case 'P':
		case 'p':
			cout << "Computer chose: Rock, Player chose: Paper" << endl;
			break;
		case 'S':
		case 's':
			cout << "Computer chose: Rock, Player chose: Scissors" << endl;
			break;
		}
		break;
	case 2:
		switch (choice) {
		case 'R':
		case 'r':
			cout << "Computer chose: Paper, Player chose: Rock" << endl;
			break;
		case 'P':
		case 'p':
			cout << "Computer chose: Paper, Player chose: Paper" << endl;
			break;
		case 'S':
		case 's':
			cout << "Computer chose: Paper, Player chose: Scissors" << endl;
			break;
		}
		break;
	case 3:
		switch (choice) {
		case 'R':
		case 'r':
			cout << "Computer chose: Scissors, Player chose: Rock" << endl;
			break;
		case 'P':
		case 'p':
			cout << "Computer chose: Scissors, Player chose: Paper" << endl;
			break;
		case 'S':
		case 's':
			cout << "Computer chose: Scissors, Player chose: Scissors" << endl;
			break;
		}
		break;
	}

	// Determine result
	switch (result) {
	case 0:
		cout << "Tie!" << endl;
		break;
	case 1:
		cout << "Computer wins!" << endl;
		break;
	case 2:
		cout << "You win!" << endl;
		break;
	}
}

//****************************************************************
// Definition of dispScore. Function that displays total score.	*
//****************************************************************

void Game::dispScore()
{

	cout << "CPU Wins: " << cpuWins << " Player wins: " << playerWins << endl;
}

//****************************************************************
// Definition of ~Game. Destructor prints exit message.			*
//****************************************************************

Game::~Game()
{
	cout << "\nGoodbye...";
}