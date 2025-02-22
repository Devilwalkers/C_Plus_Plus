#include <iostream>
using namespace std;

int main()
{

	for (int i = 1; i <= 3; i++) //Outer Loop
	{
		// cout <<"i: " <<i<<" "<<endl;

		for (int j = 1; j <= 3; j++)	//Inner Loop
		{
			// cout <<"j: " << j<<" "<<endl;
		}
	}
	for (int i = 1; i < 4; i++) //Outer Loop
	{
		cout<<i<<"-> ";

		for (int j = 1; j <= 4; j++)	//Inner Loop
		{
			cout << "*"<<" ";
		}
		cout << endl;
	}

	return 0;
}