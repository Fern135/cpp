#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	double ssp;
	double abr;
	double adr;
	int nyd;
	long int pp;

	do
	{
		cout << "Please enter ssp: "; cin >> ssp;
	} while (ssp <= 2);
	
	do
	{
		cout << "Please enter abr(%): "; cin >> abr;
	} while (abr < 0);

	do
	{
		cout << "Please enter adr(%): "; cin >> adr;
	} while (adr < 0);

	do
	{
		cout << "Please enter nyd: "; cin >> nyd;
	} while (nyd < 1);


	for (int i = 1; i <= nyd; i++)
	{
		cout << "Starting population: " << ssp;

		ssp = ssp * (1.0 + abr) * (1.0 - adr);

		cout << " New Population: " << ssp << endl;
	}
	system("pause");
	return 0;
}
