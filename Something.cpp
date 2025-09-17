//This has nothing to do with the Animal and source files

#include <iostream> //standard input and output stream
#include <iomanip> 
using namespace std;

/*   Antonio Thomas
	 A00593870
	ITSE 1302-002
*/

/*
Third Question, You put in your hours worked and 
the amount you get paid per hour and it should show
your gross pay, FWT tax, Fica Tax, State Tax, Total Taxes
and Net pay
*/

int main() {

	double hoursWorked = 0.0;
	double payRate = 0.0;
	double fwtRate = 0.2;
	double ficaRate = 0.08;
	double stateTaxRate = 0.04;


	cout << "Enter hours worked: ";
	cin >> hoursWorked;

	cout << "How much do you get paid per hour: "
	cin >> payRate;

	double grossPay = hoursWorked * payRate;
	cout << "\nYour Gross Pay is $" << grossPay;

	double fwt = grossPay * fwtRate;
	cout << "\nYour FWT is $" << fwt;

	double ficaTax = grossPay * ficaRate;
	cout << "\nYour FICA Tax is $" << ficaTax;

	double stateTax = grossPay * stateTaxRate;
	cout << "\nYour state Tax is $" << stateTax;

	double taxes = fwt + ficaTax + stateTax;
	cout << "\nyour total taxes is $" << taxes;

	double netPay = grossPay - taxes;
	cout << "\nYour Net Pay is $" << netPay;


	return 0;
}


