#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan, rate, pay, prevBalance, interest, total, payment, newBalance;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	prevBalance = loan;
	while (newBalance > 0){
		if(year != 1)
			prevBalance = newBalance;
		interest = prevBalance*rate/100;
		total = prevBalance + interest;
		payment = pay;
		if(total <= payment)
			payment = total;
		newBalance = total-payment;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << prevBalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newBalance;
		cout << "\n";
		year++;
	}
	return 0;
}
