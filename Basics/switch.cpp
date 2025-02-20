#include <iostream>
using namespace std;

int main()
{

	char grade;
	cout << "Enter your grade: " << endl;
	cin >> grade;

	switch (grade)
	{
	case 'A':
		cout << "Your Marks range between 100-85." << endl;
		break;
	case 'B':
		cout << "Your Marks range between 84-70." << endl;
		break;
	case 'C':
		cout << "Your Marks range between 70-55." << endl;
		break;
	case 'D':
		cout << "Your Marks range between 54-40." << endl;
		break;
	default:
		cout << "Your Marks range between 39-0." << endl;
	}

	return 0;
}