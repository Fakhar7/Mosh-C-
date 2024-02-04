#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	using namespace std;
	srand(time(nullptr));
	int randomNumber = rand() % 10;
	cout << randomNumber;
}


