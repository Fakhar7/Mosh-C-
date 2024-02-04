#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	const short max_value = 6;
	const short min_value = 1;
	srand(time(0));
	int rand_dice = ( rand() % (max_value - min_value + 1)) + min_value;
	cout << rand_dice;
}
