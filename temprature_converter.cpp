#include <iostream>
int main()
{
	using namespace std;
	cout << "Enter fahrenheit: ";
	int fahrenheit;
	cin >> fahrenheit;
	
	
	double celcius;
	celcius = (fahrenheit - 32)  / 1.8;
	cout << celcius;
	
	return 0;
}
