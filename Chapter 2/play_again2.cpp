// Play Again 2.0
// Demonstrates go loops

#include <iostream>
using namespace std;

int main(){
	char again;
	do{
		cout << "\n**Played an exciting game**";
		cout << "\nDo you want to play again? (y/n): ";
		cin >> again;
	} while (again == 'y');

	cout << "\nOkay, bye.";

	return 0;
}