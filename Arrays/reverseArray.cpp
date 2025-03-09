#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
	int left = 0;
	int right = n - 1;

	while(left<=right){
		swap(arr[left], arr[right]);
		left++;
		right--;
	}
	for (int i = 0; i < n;i++){
		cout << arr[i] << " ";
	}
}

int main(){
	int n = 7, arr[]={2,5,3,4,6,7,8};

	reverseArray(arr, n);
	return 0;
}