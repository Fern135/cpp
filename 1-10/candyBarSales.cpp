/*

Write a program that calculates how much a student organization earns
during its fund raising candy sale. The program should prompt the user
to enter the number of candy bars sold and the amount the organization
earns for each bar sold. It should then calculate and display the total
amount earned.

Author: Carlos Abraham, @19cah
www.19cah.com


*/

#include <iostream>
using namespace std;


double getNumberOfCandiesBarsSold();
double getRevenuePerCandy();
double getTotalEarned();

int main()
{
	cout << "The total amount earned is: " << getTotalEarned() << endl;
	
	/* Are you using Windows OS? -yes uncomment the below code */
	// system("pause");
	return 0;
}

double getNumberOfCandiesBarsSold(){
	
	double candyBarsTotal;
	cout << "Enter the number of candy bars sold in the fund raising candy sale: ";
	cin >> candyBarsTotal;

	return candyBarsTotal;
}

double getRevenuePerCandy(){

	double getRevenuePerCandy;
	cout << "How much will the organization earn when sell a candy: ";
	cin >> getRevenuePerCandy;

	return getRevenuePerCandy;
}

double getTotalEarned(){
	
	double numberOfCandies = getNumberOfCandiesBarsSold();
	double revenuePerCandy = getRevenuePerCandy();

	return numberOfCandies * revenuePerCandy;
}
