#include<iostream>
using namespace std;

int main(){
	int n = 10, arr[10];

	for (int i = 0; i < n;i++){
		cin >> arr[i];
		arr[i] *= 2;
	}
	for (int i = 0; i < n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}