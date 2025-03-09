#include<iostream>
using namespace std;

void extremeNumber(int arr[],int n){
	int left = 0;
	int right = n - 1;

	while(left<=right){
		if(left==right){
			cout << arr[left]<<" ";
		}
		else{
			cout << arr[left] << " ";
			cout << arr[right] << " ";

		}
		left++;
		right--;
	}
}

int main(){
	int n = 7, arr[]={2,5,3,4,6,7,8};

	extremeNumber(arr, n);
	return 0;
}