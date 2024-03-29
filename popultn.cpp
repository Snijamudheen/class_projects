/*This C++ program produces a bar chart showing the population growth of Prairieville, a small town in the Midwest, at 20-year intervals during the past 100 years. The program reads in the population figures for 1900, 1920, 1940, 1960, 1980, and 2000 from a file named People.txt. It is understood that the first value represents the population in 1900 (for example, 2,843), the second the population in 1920 and so on. For each year it displays the year, followed by at least one space, followed by a bar consisting of one asterisk for each 1,000 people.*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	int number;

	inputFile.open("People.txt");	
	cout << "PRAIRIEVILLE POPULATION GROWTH\n" << "(each * represents 1000 people)\n";	

	for (int y = 1900; y <= 2000; y += 20)
	{
		cout << y << ' ';     
		inputFile >> number;

		for (int i = 0; i < number; i += 1000)
		{
			cout << '*';	
		}
		cout << endl;
	}

	inputFile.close();		
	system("pause");

	return 0;
}
