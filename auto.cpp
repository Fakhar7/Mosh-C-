#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	auto price = 9000;
	auto interestRate = 3.13f;
	auto fileSize = 90000L;
	auto character = 'a';
	auto condition = true;
	
	cout << "The type of price is :" << typeid(price).name() << endl;
	cout << "The type of interestRate is :" << typeid(interestRate).name() << endl;
	cout << "The type of fileSize is :" << typeid(fileSize).name() << endl;
	cout << "The type of character is :" << typeid(character).name() << endl;
	cout << "The type of condition is :" << typeid(condition).name() << endl;
	
	return 0;
	
}
	
	
