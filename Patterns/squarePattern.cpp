#include<iostream>
using namespace std;

int main(){

	//Square pattern
	for (int i = 1; i <= 4; i++) //Outer Loop
	{
		for (int j = 1; j <= 4; j++)	//Inner Loop
		{
			cout << "*"<<" ";
		}
		cout << endl;
	}
	
	return 0;
}