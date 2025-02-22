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
int decimalToBinaryBitwise(int n)
{
	int binary = 0;
	int i = 0;
	while (n > 0)
	{
		int bit = n & 1;
		binary = bit * pow(10, i++) + binary;
		n >>= 1;
	}
	return binary;
}
int binaryToDecimalDivision(int n)
{
	int decimal = 0;
	int i = 0;
	while (n > 0)
	{
		int bit = n % 10;
		decimal = decimal + bit * pow(2, i++);
		n /= 10;
	}
	return decimal;
}

int main()
{
	int n;
	cout << "Enter the binary: " << endl;
	cin >> n;
	int binary = decimalToBinaryDivision(n);
	// cout << binary << endl;
	int bitwise = decimalToBinaryBitwise(n);
	// cout<<bitwise<<endl;
	int decimal = binaryToDecimalDivision(n);
	// cout << decimal << endl;

	return 0;
}