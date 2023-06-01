#include <iostream>
using namespace std;

int main()
{
  const int ROW_SIZE = 3;
  const int COL_SIZE = 3;
  int total = 0;
  double average;
  int numbers [ROW_SIZE][COL_SIZE] = {{10,20,30},
                                     {40,50,60},
                                     {70,80,90}};
                                     
  for(int row = 0; row < ROW_SIZE; row++)
  {
     for(int col = 0; col < COL_SIZE; col++)
     {
             total += numbers[row][col];
     }
     average = total / COL_SIZE;
     cout << "Score average for student " << (row + 1) << ":" << average << endl;
  }
}
