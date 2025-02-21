#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryDivision(int n)
{
	int binary = 0;
	int i = 0;
	while (n > 0)
	{
		int bit = n % 2;
		binary = bit * pow(10, i++) + binary;
		n /= 2;
	}
	return binary;
}
int main()
{
	int n;
	cin >> n;
	int binary = decimalToBinaryDivision(n);
	cout << binary << endl;

	return 0;
}