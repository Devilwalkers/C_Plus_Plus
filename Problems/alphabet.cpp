#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	if ('a' <= c && c <= 'z')
	{
		cout << 0 << endl;
	}
	else if ('A' <= c && c <= 'Z')
	{
		cout << 1 << endl;
	}
	else
	{
		cout << -1 << endl;
	}
}