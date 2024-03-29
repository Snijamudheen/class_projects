/*An interactive menu driven C++ program to convert a temperature reading in celsius to fahrenheit or vice versa depending on the choice of the user.*/

#include <iostream>
using namespace std;

int main()
{
    double fahrenheit, celsius;
    float temp;
    char choice;

    cout << "Enter the temperature: " << endl;
    cin >> temp;
    cout << "Choose to convert temp to Celsius or Fahrenheit(c/f): " << endl;
    cin >> choice;

    if(choice == 'f'){
        fahrenheit = (temp * 9 / 5) + 32;
        cout << "The temperature in Fahrenheit: " << fahrenheit << endl;
    }
    else
    {
        celsius = (temp - 32) * 5 / 9;
        cout << "The temperature in Celsius: " << celsius << endl;
    }
        return 0;
}
