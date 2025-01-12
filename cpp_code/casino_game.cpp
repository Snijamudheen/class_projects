/*C++ is the language used to write this casino game. A player must deposit an initial amount to begin playing. To begin, he should guess a number from 1 to 10 and enter a bet value. The money he bets will be multiplied by 10 if he wins. His betting amount will be lost if he chooses the wrong number. The game continues until the user decides to stop.*/

#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
using namespace std;

void drawLine(int n, char symbol);
void rules();

int main()
{
    string playerName;
    int amount; 
    int bettingAmount;
    int guess;
    int dice; 
    char choice;

    srand(time(0)); 
    
    cout << "\t\tCASINO GAME";
    

    cout << "\n\nEnter Your Name : ";
    getline(cin, playerName);

    cout << "\n\nEnter Deposit amount to play game : $";
    cin >> amount;

    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << amount << "\n";

      
        do
        {
            cout << playerName << ", enter money to bet : $";
            cin >> bettingAmount;
            if (bettingAmount > amount)
                cout << "Your betting amount is more than your current balance\n"
                << "\nRe-enter data\n ";
        } while (bettingAmount > amount);

    
        do
        {
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess;
            if (guess <= 0 || guess > 10)
                cout << "Please check the number!! should be between 1 to 10\n"
                << "\nRe-enter data\n ";
        } while (guess <= 0 || guess > 10);

        dice = rand() % 10 + 1; 

        if (dice == guess)
        {
            cout << "\n\nGood Luck!! You won $" << bettingAmount * 10;
            amount = amount + bettingAmount * 10;
        }
        else
        {
            cout << "Bad Luck this time !! You lost $ " << bettingAmount << "\n";
            amount = amount - bettingAmount;
        }

        cout << "\nThe winning number was : " << dice << "\n";
        cout << "\n" << playerName << ", You have $ " << amount << "\n";
        if (amount == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "\n\n\n";
    drawLine(70, '=');
    cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
    drawLine(70, '=');

    return 0;
}

void drawLine(int n, char symbol)
{
    for (int i = 0; i < n; i++)
        cout << symbol;
    cout << "\n";
}

void rules()
{
    system("cls");
    cout << "\n\n";
    drawLine(80, '-');
    cout << "\t\tRULES OF THE GAME\n";
    drawLine(80, '-');
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(80, '-');
    
}
