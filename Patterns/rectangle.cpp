#include <iostream>
using namespace std;

int main()
{
	int rows, cols;
	cout << "Enter the Rows: ";
	cin >> rows;

	cout << "Enter the Rows: ";
	cin >> cols;

	for (int row =1; row <= rows; row++)
	{
		for (int col = 1; col <= cols; col++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}

	return 0;
}