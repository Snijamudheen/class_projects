// This C++ has a function name isPrime, which takes an integer as an argument and returns true if the argument is a prime number, or false otherwise. It also prompts for a number and indicates whether or not it is prime.

#include <iostream>
using namespace std;

bool isPrime(int num);

int main()
{
	int num = 0;

	cout << "Enter a number and I'll tell you whether it is prime: ";
	cin >> num;

	if(isPrime(num) == true)
	    cout << num << " is prime.";
	else
	    cout << num << " is NOT prime.";

	return 0;
}

bool isPrime(int answer)
{
	if(answer < 1)
	    return false;

	else if(answer == 1 || answer == 2 || answer == 3)
	    return true;

	else
	{
	    for(int i = 2; i < answer ; i++)
	    {
		if(answer % i == 0)
		    return false;
	    }
	    return true;
        }
}
