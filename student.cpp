/*This C++ program calculates students' average test scores and their grades. It also output the class average. The letter grade of A,B,C,D or F will be dispalyed based on the test score. A student with 90.0 will have letter grade of A and 80 to 89 will be B, 70 to 79 will be C, 60 to 69 is D and any grade below 59 is an F. Finally it prints out all grade for student along with their names in a table.*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct StudentGrade 
{
	string sname[100];
	double gradescore[100][6];
	char lettergrade[100];
};

//function prototypes
char calculateGrade(double courseAverage);
void calculateAverage(StudentGrade& sg, int& count);
void printScore(StudentGrade& sg, int& count);

//calculates letter grade 
char calculateGrade(double courseAverage) 
{
	if (courseAverage >= 90.0)
		return 'A';
	else if (courseAverage >= 80.0)
		return 'B';
	else if (courseAverage >= 70.0)
		return 'C';
	else if (courseAverage >= 60.0)
		return 'D';
	else
		return 'F';
}

//calculates average
void calculateAverage(StudentGrade& sg, int& count) 
{

	ifstream fRead;
	fRead.open("cosc1437ggrade.txt");

	if (!fRead) 
	{
		cout << "\n ERROR : Unable to open the file for reading.";
		exit(0);
	}

	while (!fRead.eof())
	{
		double courseAverage = 0.0;
		fRead >> sg.sname[count];

		for (int c = 0; c < 5; c++) 
		{
			fRead >> sg.gradescore[count][c];
			courseAverage += sg.gradescore[count][c];
		}

		courseAverage = courseAverage / 5.0;
		sg.gradescore[count][5] = courseAverage;
		sg.lettergrade[count] = calculateGrade(courseAverage);
		count++;
	}

	fRead.close();
}


//prints the score
void printScore(StudentGrade& sg, int& count) 
{
	double classTotal = 0.0;

	cout << left << setw(12) << "Student"
	<< left << setw(8) << "Test1" << left << setw(8)
	<< "Test2" << left << setw(8) << "Test3"
	<< left << setw(8) << "Test4" << left << setw(8)
	<< "Test5" << left << setw(10) << "Average"
	<< left << setw(8) << "Grade" << endl;

	for (int c = 0; c < count-1; c++) 
	{
		cout << left << setw(12) << sg.sname[c];

		for (int d = 0; d < 5; d++)
		      cout << left << setw(8) << sg.gradescore[c][d];
		      
		cout << left << setw(10) << sg.gradescore[c][5];
		cout << left << setw(8) << sg.lettergrade[c] << endl;
		classTotal += sg.gradescore[c][5];
	}
}

int main() 
{
	StudentGrade sg;
	int count = 0;
	
	//function call
	calculateAverage(sg, count);
	printScore(sg, count);
	return 0;
}
