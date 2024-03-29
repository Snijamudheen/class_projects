//This is a text-based histogram for a quiz given to a class of students. The quiz is graded on a scale from 0 to 5. The C++ program allows the user to enter grades for each student. As the grades are being entered, the program counts, using an array, the number of 0s, the number of 2s, the number of 4s.

#include <iostream>
using namespace std;

int main () 
{
	int grade;
	int count[6] = {0};
  
	cout << "Enter student's grade 0-5 or outside this range to end: ";
	cin >> grade;
  
	while (0 <= grade && grade <= 5) 
	{
		count[grade]++;
		cout << "Enter student's grade 0-5 or outside this range to end:";
		cin >> grade;
	}
  
	for (int i = 0; i < 6; i++)
		cout << count[i] << " grades(s) of "<< i << endl;
    
	return 0;
}
