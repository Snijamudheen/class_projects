/*A C++ program that lets the user enter the total rainfall for each of 12 months (starting with January) into an array of doubles. The program calculates and displays the total rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts.*/

#include <iostream>
#include <string>
using namespace std;

int main() {

const int MONTHS = 12;
string name[MONTHS] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
int count = 0;
double rain[MONTHS];
double avg;
double year = 0;
double lowest;
double highest;
string leastMonth, mostMonth;

for(count = 0; count < MONTHS; count++) {

    cout << "Enter rainfall for " << name[count] << ": ";
    cin >> rain[count];

    while (rain[count] < 0){

        cout << "Invalid data (negative rainfall) -- retry" << endl;
        cin >> rain[count];
    }
}
	
for(int count = 0; count < MONTHS; count++)
year += rain[count];

avg = year / MONTHS;

for ( int month = 0; month < MONTHS; month++ ){

        highest = rain[0];
        for ( int count = 0; count < MONTHS; count++ ){

            if ( rain[count] > highest ){
                highest = rain[count];
                mostMonth = name[count];
            }
        }

        lowest = rain[0];
        leastMonth = name[0];

        for ( int count = 0; count < MONTHS; count++ ){
            if ( rain[count] < lowest ){
                lowest = rain[count];
                leastMonth = name[count];
            }
        }
    }

cout << "Total rainfall: " << year << endl;
cout << "Average rainfall: " << avg << endl;
cout << "Least rainfall in: " << leastMonth << endl;
cout << "Most rainfall in: " << mostMonth << endl;

return 0;

}
