#include <iostream>

typedef unsigned char BYTE;

int main()
{
	BYTE a = 200;
	BYTE b = 150;

	BYTE c = (a + b) / 2;
	std::cout << (int)c << '\n';

	return 0;
}