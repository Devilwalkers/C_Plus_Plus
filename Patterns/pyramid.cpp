#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	// Half Pyramid
	// for (int row = 0; row < n; row++)
	// {
	// 	for (int col = 0; col < row; col++)
	// 	{
	// 		cout << "* ";
	// 	}
	// 	cout << endl;
	// }
	// // Inverted Half Pyramid
	// for (int row = 0; row < n; row++)
	// {
	// 	for (int col = 0; col < n - row; col++)
	// 	{
	// 		cout << "* ";
	// 	}
	// 	cout << endl;
	// }

	// // Hollow Half Pyramid
	// for (int row = 0; row < n; row++)
	// {
	// 	int totalCol = row + 1;
	// 	for (int col = 0; col < totalCol; col++)
	// 	{
	// 		if (row == 0 || row == 1 || row == n - 1)
	// 		{
	// 			cout << "* ";
	// 		}
	// 		else
	// 		{
	// 			if (col == 0 || col == totalCol - 1)
	// 			{
	// 				cout << "* ";
	// 			}
	// 			else
	// 			{
	// 				cout << "  ";
	// 			}
	// 		}
	// 	}
	// 	cout << endl;
	// }
	// // Inverted Hollow Half Pyramid
	// for (int row = 0; row < n; row++)
	// {
	// 	for (int col = 0; col < n - row; col++)
	// 	{
	// 		if (row == 0 || row == n - 1 || col == 0 || row + col == n - 1)
	// 		{
	// 			cout << "* ";
	// 		}
	// 		else
	// 		{
	// 			cout << "  ";
	// 		}
	// 	}
	// 	cout << endl;
	// }
	// // Numeric Half Pyramid
	// for (int row = 1; row < n; row++)
	// {
	// 	for (int col = 1; col < row; col++)
	// 	{
	// 		cout << col << " ";
	// 	}
	// 	cout << endl;
	// }

	// // Numeric Half Pyramid
	// /*
	// 	Pattern
	// 	1
	// 	23
	// 	345
	// 	4567
	// */

	// while (int i=1 <= n)
	// {
	// 	int j = i, count = 1;
	// 	while (count <= i)
	// 	{
	// 		cout << j << " ";
	// 		j++;
	// 		count = count + 1;
	// 	}
	// 	cout << "\n";
	// 	i++;
	// }

	/*
		Pattern
		N = 4
		   *
		  ***
		 *****
		*******
	*/
	// int rows = 4;
	// for (int i = 1; i <= rows; i++)
	// {
	// 	for (int j = i; j < rows; j++)
	// 	{
	// 		cout << "  ";
	// 	}
	// 	for (int j = 1; j <= (2 * i - 1); j++)
	// 	{
	// 		cout << "* ";
	// 	}
	// 	cout << endl;
	// }

	/*
		Pattern
		N = 4
		1
		22
		333
		4444
	*/

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
	return 0;
}