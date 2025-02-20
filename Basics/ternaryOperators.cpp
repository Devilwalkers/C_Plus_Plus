#include <iostream>
using namespace std;

int main()
{

	int x = 15, y = 20;
	int age=25;
	(age >= 18) ? cout<<"Can vote" :cout<<"Cannot vote";
	cout << endl;

	int result = (x > y) ? x : y; 

	cout << "The result is: " << result << endl;

	return 0;
}