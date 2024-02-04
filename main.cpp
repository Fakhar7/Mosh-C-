#include <iostream>
using namespace std;

int main()
{
	cout << "Before swapping a value.\n";
	int a = 1;
	int b = 2;
	cout << "The value of a and b is " << a << ", " << b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "After swapping a value.\n";
	cout << "The value of a and b is " << a << ", " << b << endl;
	return 0;
}
