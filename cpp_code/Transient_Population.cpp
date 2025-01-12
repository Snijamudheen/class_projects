/*A C++ program that displays the size of a population for any number of years. The program asks for the following data:

The starting size of a population P
The annual birth rate (as a percentage of the population expressed as a fraction in decimal form)B
The annual death rate (as a percentage of the population expressed as a fraction in decimal form)D
The average annual number of people who have arrived A
The average annual number of people who have moved away M
The number of years to display nYears
To calculate the new population after one year, a function uses the formula N = P + BP - DP + A - M where N is the new population size, P is the previous population size, and B, D, A and M are as defined above.*/

#include <iostream>
#include <cmath>
using namespace std;

double cal(double P,double B,double D,int A,int M);

int main(){

 double P, B, D;
 int A, M, Y, nYears;

cout << "This program calculates population change.\n";
cout << "Enter the starting population size: ";
cin >> P;

while(P < 2){

            cout << "Starting population must be 2 or more." << endl;
	    cout << "Please re-enter: ";
            cin >> P;
	    
	    }
	
        cout << "Enter the annual birth rate (as % of current population): ";
        cin >> B;
	
while(B < 0){

            cout << "Birth rate percent cannot be negative."<<endl;
	    cout << "Please re-enter: ";
            cin >> B;
	    
        }

        cout << "Enter the annual death rate (as % of current population): ";
        cin >> D;

while(D < 0){

            cout << "Death rate percent cannot be negative." << endl;
	    cout << "Please re-enter: ";
            cin >> D;
	    
        }

        cout << "How many individuals move into the area each year? ";
        cin >> A;

        cout << "How many individuals leave the area each year? ";
        cin >> M;

while(M < 0){

            cout << "Departures cannot be negative.";
	    cout << "Please re-enter: ";
            cin >> M;
	    
        }

        cout << "For how many years do you wish to view population changes? ";
        cin >> nYears;

while(nYears < 1){

            cout << "Years must be one or more." << endl;
	    cout << "Please re-enter: ";
            cin >> nYears;
	    
        }
	    
        
cout << "\n\nStarting population: " << P << "\n\n";

for (int Y = 1; Y <= nYears; Y++){

        P = cal(P, B, D, A, M);

        cout << "Population at the end of year " << Y << " is " << (int)P << "." << endl;
	}
  
    return 0;
}


double cal(double P, double B, double D, int A, vint M){

double N = P + (B * P) / 100 - D * P) / 100 + A - M;
return N;
