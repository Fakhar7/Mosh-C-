#include <iostream>
int main()
{
	int x = 10;
	// int y = x++; 	// Here, x will become 11, y will be 10
	int z = ++x;		// Here, z will become 11, also x be a 11.
	std::cout << z;
}
