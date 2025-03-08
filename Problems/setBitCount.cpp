#include <iostream>
using namespace std;

int main()
{
	int num, setBitCount = 0;
	cin >> num;

	while (num != 0)
	{
		int lastBit = (num & 1);
		if (lastBit == 1)
		{
			setBitCount += 1;
		}
		num = num >> 1;
	}
	cout << "Total set bit count: " << setBitCount << endl;
	return 0;
}