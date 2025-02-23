#include <iostream>
using namespace std;

int main()
{
	int rows = 10, cols = 12;

	// Hollow Rectangle
	for (int row = 0; row < rows; row+=1) //Outer
	{
		for (int col = 0; col < cols; col+=1)// Inner
		{
			if(row==0 || row == rows-1){
				cout << "* ";
			}
			// Middle columns
			else{
				if(col==0 || col == cols-1){
					cout << "* " ;
				}
				// for the Hollow part
				else{
					cout <<"  ";
				}
			}
		}
		cout << endl;
	}

	// Hollow square
	int sides = 5;

	for (int row = 0; row < sides; row+=1)
	{
		for (int col = 0; col < sides; col+=1)
		{
			if(row==0 || row == sides-1){
				cout << "* ";
			}
			else{
				if(col==0 || col == sides-1){
					cout << "* " ;
				}
				else{
					cout <<"  ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}