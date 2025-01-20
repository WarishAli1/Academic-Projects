#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;

char getComputerMove() 
{ 
	int move; 
	srand(time(NULL)); 
	move = rand() % 3; 

	if (move == 0) { 
		return 'p'; 
	} 
	else if (move == 1) { 
		return 's'; 
	} 
	return 'r'; 
} 

int getResults(char playerMove, char computerMove) 
{ 
	if (playerMove == computerMove) { 
		return 0; 
	} 

	if (playerMove == 's' && computerMove == 'p') { 
		return 1; 
	} 
	if (playerMove == 's' && computerMove == 'r') { 
		return -1; 
	} 
	if (playerMove == 'p' && computerMove == 'r') { 
		return 1; 
	} 
	if (playerMove == 'p' && computerMove == 's') { 
		return -1; 
	} 
	if (playerMove == 'r' && computerMove == 'p') { 
		return -1; 
	} 
	if (playerMove == 'r' && computerMove == 's') { 
		return 1; 
	} 
	
	return 0; 
} 

int main() 
{ 
	char playerMove; 
	cout << "Welcome to Stone Paper Scissor Game" << endl;
	cout << "Enter r for ROCK, p for PAPER, and s for SCISSOR"<< endl; 

	while(1) { 
		cin >> playerMove; 
		if (playerMove == 'p' || playerMove == 'r' || playerMove == 's') { 
			break; 
		} 
		else { 
			cout << "Invalid Player Move!!! Please Try Again." << endl; 
		} 
	} 
	
	
	char computerMove = getComputerMove(); 

	int result = getResults(playerMove, computerMove); 

	if (result == 0) { 
		cout << "Game Draw!"<<endl; 
	} 
	else if (result == 1) { 
		cout << "Congratulations! Player won the gmae!" << endl;
	} 
	else { 
		cout << "Oh! Computer won the game!"<<endl; 
	} 

	cout << "Your Move: " << playerMove << endl; 
	cout << "Computer's Move: " << computerMove << endl; 

	return 0; 
}
