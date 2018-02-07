/*

Write a program that computes the total sales tax on a $52 purchase.
Assume the state sales tax is 4 percent and the county sales tax
is 2 percent. Display the purchase price, state tax, county tax,
and total tax amounts on the screen.

Author: Carlos Abraham, @19cah
www.19cah.com


*/

#include <iostream>
using namespace std;

const double COUNTRY_TAX = 2;
const double STATE_TAX = 4;

void displayTaxReport(double purchasePrice, double stateTax, double contryTax, double taxTotal);
double countryTax(double sale);
double stateTax(double sale);
double taxTotal(double sale);

int main()
{
	double sale = 52;
	displayTaxReport(sale, countryTax(sale), stateTax(sale), taxTotal(sale));

	
	/* Are you using Windows OS? -yes uncomment the below code */
	system("pause");
	return 0;
}
void displayTaxReport(double purchasePrice, double contryTax, double stateTax, double taxTotal){
	
	cout << "Purchase Price: $" << purchasePrice << endl;
	cout << "=================" << endl;
	cout << "Country Tax: %" << contryTax << endl;
	cout << "State Tax: %" << stateTax << endl;
	cout << "Total Taxes: %" << taxTotal << endl;
}

double countryTax(double sale)
{
	return (sale * COUNTRY_TAX) / 100;
}

double stateTax(double sale)
{
	return (sale * STATE_TAX) / 100;
}

double taxTotal(double sale)
{
	return countryTax(sale) + stateTax(sale);
}
