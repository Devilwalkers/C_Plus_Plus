#include <iostream>
using namespace std;

int main()
{
	int n = 7;
	// Half Pyramid
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < row; col++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	// Inverted Half Pyramid
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n - row; col++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	// Hollow Half Pyramid
	for (int row = 0; row < n; row++)
	{
		int totalCol = row + 1;
		for (int col = 0; col < totalCol; col++)
		{
			if (row == 0 || row == 1 || row == n - 1)
			{
				cout << "* ";
			}
			else
			{
				if (col == 0 || col == totalCol - 1)
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
	// Inverted Hollow Half Pyramid
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n - row; col++)
		{
			if (row == 0 || row == n - 1 || col == 0 || row + col == n - 1)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	// Numeric Half Pyramid
	for (int row = 1; row < n; row++)
	{
		for (int col = 1; col < row; col++)
		{
			cout << col<<" ";
		}
		cout << endl;
	}
	return 0;
}