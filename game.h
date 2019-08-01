#ifndef GAME_H
#define GAME_H

// Game class declaration

class Game
{
private:
	char choice;
	int playerWins;
	int cpuChoice;
	int cpuWins;
	int result;

public:
	bool exit = false;
	Game(); // constructor
	void getChoice();
	void getResults();
	void dispResults();
	void dispScore();
	~Game(); // destructor
};

#endif