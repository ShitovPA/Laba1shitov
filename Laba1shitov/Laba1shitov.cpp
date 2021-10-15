#include <iostream>

using namespace std;

int main()
{
	int value;
	cout << "Enter an integer: ";
	cin >> value;
	cout << "The binary representation in memory of the number you entered:\n";
	int order = sizeof(int) * 8;
	int mask = 1 <<order - 1;
	for (int i = 1; i <= order; i++)
	{
		putchar(value & mask ? '1' : '0');
		value <<= 1;
		if (i % 8 == 0)
		{
			putchar(' ');
		}
		if (i % order - 1 == 0)
		{
			putchar(' ');
		}
	}

	return 0;
}