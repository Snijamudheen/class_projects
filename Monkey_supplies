/*A local zoo wants to keep track of how many pounds of food each of its three monkeys eats each day during a typical week. This C++ program stores this information in a two-dimensional 3 × 7 array, where each row represents a different monkey and each column represents a different day of the week. The monkeys are represented by integers 1, 2, and 3; the weekdays are "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday". The program first prompts the user to input the data for each monkey, starting with "Sunday" for monkey #1, then monkeys #2 and #3, followed by "Monday" for monkey #1, then monkeys #2 and #3 and so on, through "Saturday". The program then creates a report that includes the following information, each properly labeled (see below): 
-Average amount of food eaten per day by the whole family of monkeys. 
-The least amount of food eaten during the week by any one monkey. 
-The greatest amount of food eaten during the week by any one monkey.*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	
	const int mkys = 3;
	const int days = 7;
	int food[mkys][days];
	string day[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	double pounds, least, most, sum = 0;
	string leastDay, mostDay;
	int numMost,numLeast;

	for (int row = 0; row < days; row++)
	{
		for (int col = 0; col < mkys; col++)
		{
			do
			{

				cout << "Enter the food eaten by monkey #" << (col + 1) << " on " << day[row] << ":";
				cin  >> pounds;

				if (pounds < 0)
				{
					cout << "Invalid (negative) food quantity -- re-enter\n";
				}

			} while (pounds < 0);

			food[col][row] = pounds;
			sum += pounds;
		}
	}

	least = food[0][0];
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{

			if (food[row][col] < least)
			{
				least = food[row][col];
				leastDay = day[col];
				numLeast = row + 1;
			}
			else if (food[row][col] > most)
			{
				most = food[row][col];
				mostDay = day[col];
				numMost = row + 1;
			}
		}
	}

	most = food[0][0];
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{
			if (food[row][col] > most)
			{
				most = food[row][col];
				mostDay = day[col];
				numMost = row + 1;
			}
		}
	}


	cout << fixed << showpoint << setprecision(4);
	cout << "Average food consumed daily: " << (sum / 7.0) << endl;
	cout << "The least daily food consumed was by Monkey #" << numLeast << " on " << leastDay << ".\n";
	cout << "The most daily food consumed was by Monkey #" << numMost << " on " << mostDay << ".\n";


	return 0;
}
