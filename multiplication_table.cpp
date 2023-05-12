/*This program asks the user to enter a number, as well as a range within which the multiplication table of that number should be displayed.*/

#include <iostream>
using namespace std;

int main()
{
    int n, range;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Enter range: ";
    cin >> range;
    
    for (int i = 1; i <= range; ++i) 
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}
