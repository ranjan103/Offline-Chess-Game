#include <iostream>
#include <string>
#include "chess.h"

using namespace std;





int main()
{
	Board b;
	string s;
	bool newgame = true;
	cout << "A game by Abhishek Ranjan"<<endl;
	cout << "Enter any key to continue" << endl;
	cin >> s;

	while(newgame){
		b.setBoard();
		while (b.playGame());
		cout << "Do you want to play again? (y for yes, anything else for no) ";
		cin >> s;
		if (s != "y")
			newgame = false;
	}


	return 0;
}