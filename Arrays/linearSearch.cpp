#include <iostream>
using namespace std;

int main()
{
	int n = 5, arr[5] = {2, 4, 6, 8, 10}, target = 5;
	bool flag = 0; // 0-> Not found, 1-> found.

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == target)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout << "Search complete target found." << endl;
	}
	else
	{
		cout << "Search complete target not found." << endl;
	}
	return 0;
}