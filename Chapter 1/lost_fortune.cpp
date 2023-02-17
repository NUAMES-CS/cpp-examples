// Lost Fortune
// A personalized adventure

#include <iostream>
#include <string>

using std::count;
using std::cin;
using std::endl;
using std::string;

int main(){
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	//get the information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventures;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	return 0;
}