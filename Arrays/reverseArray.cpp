#include <iostream>
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

void reverseArrayBitwise(int arr[], int n)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		arr[left] = arr[left] ^ arr[right];
		arr[right] = arr[left] ^ arr[right];
		arr[left] = arr[left] ^ arr[right];
		left++;
		right--;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int n = 7, arr[] = {2, 5, 3, 4, 6, 7, 8};

	reverseArray(arr, n);
	cout << endl;
	reverseArrayBitwise(arr, n);
	return 0;
}