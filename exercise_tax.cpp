#include <iostream>
using namespace std;

int main()
{
	double sales;
	cout << "Enter sales: ";
	cin >> sales;
	cout << "Sales : $" << sales << endl;
	// State Tax = 4%
	// County Tax = 2%
	
	const double state_tax_rate = 0.04;
	double state_tax = sales * state_tax_rate;
	cout << "State tax: $" << state_tax << endl;
	
	const double county_tax_rate = 0.02;
	double county_tax = sales * county_tax_rate;
	cout << "County tax: $" << county_tax << endl;
	
	
	const double total_tax = state_tax + county_tax;
	cout << "Total tax: $" << total_tax << endl;
	double total_sales = sales - total_tax;	
	cout << "Your total sales is :$" << total_sales;
	
	return 0;
}
