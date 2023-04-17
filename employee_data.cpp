/*This is a C++ program that uses the concept of vectors to calculate the gross pay of each employee in a firm. It asks the user for their hourly payrate and the number of hours worked.*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<int> hours;
    vector<double> payrate;
    int numemp;
    int index = 0;

    cout << "How many employees do you have?" << endl;
    cin >> numemp;

    for(index = 0; index < numemp; index++){
        int temphours;
        int temprate;

        cout << "hours worked by employee #" << (index+1) << ":";
        cin >> temphours;
        hours.push_back(temphours);
        cout << "hourly payrates for employee #" << (index+1) << ":";
        cin >> temprate;
        payrate.push_back(temprate);
    }

    for(index = 0; index < numemp; index++){
            double grosspay = hours[index] * payrate[index];
            cout << "grosspay for employee #" << (index+1) << ":" << grosspay << endl;
    }
    return 0;
}
