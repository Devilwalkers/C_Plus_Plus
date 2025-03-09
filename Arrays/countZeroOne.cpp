#include<iostream>
using namespace std;

void countZeroOne(int arr[],int n){
	int countZero = 0;
	int countOne = 0;

	for (int i = 0; i < n; i++)
	{
		if(arr[i]==0){
			countZero++;
		}
		else{
			countOne++;
		}
	}
	cout << "Zeros are: " << countZero << endl;
	cout << "Ones are: " << countOne << endl;
	
}
int main(){

	int arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1};
	int n = 12;

	countZeroOne(arr, n);

	return 0;
}