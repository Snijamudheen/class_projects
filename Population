/*This C++ program will predict the size of a population of organisms. The program asks the user for the starting number of organisms, their average daily population increase (as a percentage, expressed as a fraction in decimal form.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

  double start_organisms;
  double daily_increase;
  int days;
  double updated_organisms;

cout << "Enter the starting number of organisms: ";
cin >> start_organisms;

  while (start_organisms < 2){

      cout << "The starting number of organisms must be at least 2.\n";
      cout << "Enter the starting number of organisms: ";
      cin >> start_organisms;
  }

  cout << "Enter the average daily population increase (as a percentage): ";
  cin >> daily_increase;

  while (daily_increase < 0){

      cout << "The average daily population increase must be a positive value.\n ";
      cout << "Enter the daily population increase: ";
      cin >> daily_increase;
  }

  cout << "Enter the number of days they will multiply: ";
  cin >> days;

  while (days < 1){

      cout << "The number of days must be at least 1.\n";
      cout << "Enter the number of days: ";
      cin >> days;

  }

  for (int i = 0; i < days; i++){

      updated_organisms = start_organisms + (daily_increase * start_organisms);
      cout << "On day " << i + 1 << " the population size was " << round(updated_organisms) << "." << "\n";
      start_organisms = updated_organisms;

  }

  system ("pause");

   return 0;

}
