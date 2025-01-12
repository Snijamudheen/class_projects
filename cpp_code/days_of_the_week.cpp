#include <iostream>
using namespace std;

int main () {
   int day;
   cout << "Enter day number: " << endl;
   cin >> day;

   if(day == 1){
    cout << "It is Sunday." << endl;
   }else if(day == 2){
    cout << "It is Monday." << endl;
   }else if(day == 3){
    cout << "It is Tuesday." << endl;
   }else if(day == 4){
    cout << "It is Wednesday." << endl;
   }else if(day == 5){
    cout << "It is Thursday." << endl;
   }else if(day == 6){
    cout << "It is Friday." << endl;
   }else if(day == 7){
    cout << "It is Saturday." << endl;
   }else{
    cout << "Invalid number" << endl;
   }

   return 0;
}
