/*This C++ program has an isPrime function that reads in an integer that is less than 3001 stores, a list of all the prime numbers from 2 through that number in a file named "PrimeList.txt". After closing the file, the program writes "Prime numbers written to PrimeList.txt." on a line by itself in standard output. Input Validation: If the value read in exceeds 3000, the program silently terminates.*/

#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int);

int main()
{
	
int num = 0;
int i;
bool prime;

ofstream outFile;
outFile.open("PrimeList.txt");

while(num == 0 )
{
	
    cin >> num;
}


for(i = 2; i < num; i++)
	
    if(isPrime(i))
          outFile << i << "\n";


cout << "Prime numbers written to PrimeList.txt.\n";
outFile.close();
	
return 0;
}

bool isPrime(int n){
int i;
	
for(i = 2; i < n-1; i++)
    if(n % i == 0)
        return false;
return true;
}
