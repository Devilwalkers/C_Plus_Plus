#include<iostream>
using namespace std;

int main(){
	int n = 5, sum=0, arr[5];

	for (int i = 0; i < n;i++){
		cin >> arr[i];
		sum += arr[i];
	}

	cout << sum << endl;
	return 0;
}