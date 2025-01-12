/*This C++ program reverses a string and displays it.*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
 char str[50], temp;
 int i,j;              //j is the max index of the string str.

 cout << "enter string: " << endl;
 gets(str);            //hello

 j = strlen(str) - 1;      //length of string - 1   //0 to 9 = len is 10  //j = 5 - 1 = 4

 for(i = 0; i < j; i++, j--)
 {                  //  i-i++    j-j--
    temp = str[i];                        //  0-h        4-o
    str[i] = str[j];                      //  1-e        3-l
    str[j] = temp;                        //  2-l        2-l
 }
 cout << "reversed string: " << str << endl;

 return 0;
}
