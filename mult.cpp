#include <iostream>
using namespace std;

int main()
{
  int a;

  cout << "Enter a number less than 20: " << endl;
  cin >> a;

  while(a <= 20)
  {
    if(a % 3 == 0)
       cout << "Value of a: " << a << endl;
    a++;
  }
}
