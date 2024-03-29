/*This is a C++ program that accepts the name and total marks of 4 students in an array. It then displays the names and marks of the students securing highest and lowest marks.*/

#include <iostream>
using namespace std;

int main()
{
	int a[4];
	string name;
	int highest;
	int lowest;

	for(int i = 0; i < 4; ++i)
	{
		cout << "enter your name: " << endl;
		cin >> name;
		cout << "enter your score: " << endl;
		cin >> a[i];
	}
	
	highest = lowest = a[0];

	for(int i = 0; i < 4; ++i)
	{
		if(a[i] > highest)
			highest = a[i];
		if(a[i] < lowest)
			lowest = a[i];
	}

	cout << "\nHighest mark:" << highest << "\nLowest mark:" << lowest << "\n";

	return 0;
}
