//This is a C++ program that displays a menu allowing the user to select air, water, or steel. After the user has made a selection, he or she should be asked to
//enter the distance a sound wave will travel in the selected medium. The program will then display the amount of time it will take.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     const double AIR = 1100;
     const double WATER = 4900;
     const double STEEL = 16400;

     const int AIR_CHOICE = 1;
     const int WATER_CHOICE = 2;
     const int STEEL_CHOICE = 3;

     int choice; 
     double distance; 
     double speed; 
     double time;

     cout << "Select a medium:\n"
          << "1. Air\n"
          << "2. Water\n"
          << "3. Steel\n\n"
          << "Enter your choice: ";
     cin >> choice;
     cout << fixed << showpoint << setprecision(4);

     switch(choice)
     {
          case AIR_CHOICE:
               speed = AIR;
               cout << "Enter the distance: ";
               cin >> distance;

               if (distance > 0)
               {
                    time = distance / speed;
                    cout << "\nA sound wave takes "
                         << time << " seconds to travel "
                         << distance << " feet through air.\n";
               }
               else
                    cout << "\nDistance must be greater than zero.\n";
               break;

          case WATER_CHOICE:
               speed = WATER;
               cout << "Enter the distance: ";
               cin >> distance;

               if (distance > 0)
               {
               time = distance / speed;
               cout << "\nA sound wave takes "
                    << time << " seconds to travel "
                    << distance << " feet through water.\n";
               }
               else
                    cout << "\nDistance must be greater than zero.\n";
               break;

          case STEEL_CHOICE:
               speed = STEEL;
               cout << "Enter the distance: ";
               cin >> distance;

               if (distance > 0)
               {
                    time = distance / speed;
                    cout << "\nA sound wave takes "
                         << time << " seconds to travel "
                         << distance << " feet through steel.\n";
               }
               else
                    cout << "\nDistance must be greater than zero.\n";
               break;

          default:
               cout << "\nThe valid choices are 1 through 3. Run the\n"
                    << "program again and select one of those.\n";
     }
     return 0;
}
