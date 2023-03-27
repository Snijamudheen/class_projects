/*The project helps understand banking apps on a basic level. In other words, this primary C++ project informs you how to modify, add, or delete any data record. This particular program can:

-Deposit
-Withdraw
-Show account details
-Exit.

*/

#include <iostream>
using namespace std;

class BankAccount {
    public:
	int accountNumber;
	double Balance;

	BankAccount(int Accno, double Bal) {
		accountNumber = Accno;
		Balance = Bal;
	}

	double getBal() {

		return(Balance);
	}

	int getAccNo() {
		return(accountNumber);
	}

	void setBal(double amount) {
		Balance = amount;
	}

	void setAccNo(int Accno) {
		accountNumber = Accno;
	}

	void virtual showAccNo() {

		
		cout << "     Account Information       " << endl;
		cout << "------------------------------" << endl;
		cout << "     Account Number:    " << accountNumber << endl;
		cout << "     Account Balance:   " << Balance << endl;
		cout << "------------------------------" << endl;
		cout << endl;
	}

	double virtual depAmnt(double dAmnt) {
		Balance = Balance + dAmnt;
		return(Balance);
	}

	double virtual wdrawAmnt(double wAmnt) {

		Balance = Balance - wAmnt;
		return(Balance);
	}
};

class CheckingAccount :BankAccount {

	double Interest;
	double minBal;
	double serChge;
public:
	CheckingAccount(int pAccno, double pAmnt, double pInterest) :BankAccount(pAccno, pAmnt) {
		Interest = pInterest;
		minBal = 500;
	}

	void setlntRate(double intRate) {
		Interest = intRate;
	}
	double retlntRate() {
		return(Interest);
	}

	void setMinBal(double mBal) {

		minBal = mBal;
	}

	double retMinBal() {
		return(minBal);
	}

	void setSerChge(double sCharge) {
		serChge = sCharge;
	}

	double retSerChge() {
		return(serChge);
	}

	double depAmnt(double dAmnt) {
		Balance = Balance + dAmnt;
		return(Balance);
	}

	double wdrawAmnt(double wAmnt) {

		if (wAmnt <= Balance)
			Balance = Balance - wAmnt;
		else
			cout << "You have insufficient funds!" << endl;

		return(Balance);
	}

	void showAccNo() {

		
		cout << "       Account Information         " << endl;
		cout << "----------------------------" << endl;
		cout << "     Account Number:    " << accountNumber << endl;
		cout << "     Account Balance:   " << Balance << endl;
		cout << "------------------------------" << endl;
		cout << endl;

	}
};
class SavingAccount :BankAccount {
	double minBal;
public:

	SavingAccount(int pAccno, double pAmnt) :BankAccount(pAccno, pAmnt) {

		minBal = 500;
	}
	double depAmnt(double dAmnt) {
		Balance = Balance + dAmnt;
		return(Balance);
	}

	double wdrawAmnt(double wAmnt) {
		if (wAmnt <= Balance)
			Balance = Balance - wAmnt;
		else
			cout << "You have insufficient funds!" << endl;
		return(Balance);
	}

	void setMinBal(double mBal) {
		minBal = mBal;
	}

	void showAccNo() {
		
		cout << "       Account Information         " << endl;
		cout << "----------------------------" << endl;
		cout << "     Account Number:    " << accountNumber << endl;
		cout << "     Account Balance:   " << Balance << endl;
		cout << "------------------------------" << endl;
		cout << endl;
	}
};

int main() {
	double amount;
	int choice;
	do {

		cout << endl;
		cout << "    Create an Account:   " << endl;
		cout << "______________________________\n" << endl;
		cout << "1. Checking Account" << endl;
		cout << "2. Savings Account" << endl;
		cout << "3. Exit" << endl;
		cout << "______________________________" << endl;
		cin >> choice;
		cout << endl;

		if (choice == 1) {

			int Accno;
			double newBal;
			double intRate;
			cout << "Enter account number: " << endl;
			cin >> Accno;

			cout << "Enter opening balance: " << endl;
			cin >> newBal;

			cout << "Enter interest rate:" << endl;
			cin >> intRate;

			CheckingAccount
				obj(Accno, newBal, intRate);
			int accChoice;
			do {
				cout << endl;
				cout << "___________________________\n" << endl;
				cout << "1. Deposit" << endl;
				cout << "2. Withdraw" << endl;
				cout << "3. Account Info" << endl;
				cout << "4. Exit" << endl;
				cout << "___________________________" << endl;
				cin >> accChoice;
				cout << endl;

				switch (accChoice) {
				case 1:
					cout << "Enter amount: " << endl;
					cin >> amount;
					double dAmnt;
					dAmnt = obj.depAmnt(amount);
					cout << "Available balance: " << dAmnt << endl;
					break;
				case 2:
					cout << "Enter amount: " << endl;
					cin >> amount;
					double wAmnt;
					wAmnt = obj.wdrawAmnt(amount);
					cout << "Available balance: " << wAmnt << endl;
					break;
				case 3:
					obj.showAccNo();
					break;
				}
			}

			while (accChoice != 4);
		}
		else if (choice == 2) {

			int pAccno;
			double pnewBal;
			double _irate;

			cout << "Enter account number:" << endl;
			cin >> pAccno;

			cout << "Enter opening balance:" << endl;
			cin >> pnewBal;

			cout << "Enter interest rate:" << endl;
			cin >> _irate;

			SavingAccount sObj(pAccno, pnewBal);
			int pChoice;

			do {
				cout << endl;
				cout << "______________________\n" << endl;
				cout << "1. Deposit" << endl;
				cout << "2. Withdraw" << endl;
				cout << "3. Account Info" << endl;
				cout << "4. Exit" << endl;
				cout << "______________________" << endl;
				cin >> pChoice;
				cout << endl;
				switch (pChoice) {
				case 1:
					cout << "Enter amount:" << endl;
					cin >> amount;
					double _dAmnt;
					_dAmnt = sObj.depAmnt(amount);
					cout << "Available balance: " << _dAmnt;
					break;
				case 2:
					cout << "Enter amount:" << endl;
					cin >> amount;
					double _wamount;
					_wamount = sObj.wdrawAmnt(amount);
					cout << "Available balance:" << _wamount;
					break;
				case 3:
					sObj.showAccNo();
					break;
				case 4:
					break;
				default:
					cout << "Invalid choice";
					break;
				}

			} while (pChoice != 4);
		}
	} while (choice != 3);
}
