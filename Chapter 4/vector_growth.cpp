// Demonstrated the examples from the text p. 129-130
// capacity() Member Function
// reserve() Member Function

#include <iostream>
#include <vector>

using namespace std;

int main(){
	cout << "Creating a 10 element vector to hold scores.\n";
	vector<int> scores(10,0); //initialize all 10 elements to 0
	cout << "Vector size is: " << scores.size() << endl;
	cout << "Vector capacity is: " << scores.capacity() << endl;
	
	cout << "Adding a score.\n";
	scores.push_back(0); // memory is reallocated to accommodate growth
	cout << "Vector size is: " << scores.size() << endl;
	cout << "Vector capacity is: " << scores.capacity() << endl;

	cout << "\nCreating a list of scores.\n";
	vector<int> scores2(10,0); //initialize all 10 elements to 0
	cout << "Vector size is: " << scores2.size() << endl;
	cout << "Vector capacity is: " << scores2.capacity() << endl;
	
	cout << "Reserving more memory.\n";
	scores2.reserve(20); // reserve memory for 10 additional elements
	cout << "Vector size is: " << scores2.size() << endl;
	cout << "Vector capacity is: " << scores2.capacity() << endl;

	return 0;
}

