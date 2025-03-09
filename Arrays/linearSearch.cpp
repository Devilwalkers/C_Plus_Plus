#include <iostream>
using namespace std;

bool linearSearch(int arr[],int n,int target){
	for (int i = 0; i < n;i++){
		if(arr[i]==target){
			return true;
		}
	}
	return false;
}

int main()
{
	int arr[5] = {2, 4, 6, 8, 10};
	int n = 5;
	int target = 6;

	int ans = linearSearch(arr, n, target);
	if(ans==1){
		cout << "Target Found" << endl;
	}
	else{
		cout << "Target not found" << endl;

	}

	// bool flag = 0; // 0-> Not found, 1-> found.

	// for (int i = 0; i < n; i++)
	// {
	// 	if (arr[i] == target)
	// 	{
	// 		flag = 1;
	// 		break;
	// 	}
	// }
	// if (flag == 1)
	// {
	// 	cout << "Search complete target found." << endl;
	// }
	// else
	// {
	// 	cout << "Search complete target not found." << endl;
	// }
	return 0;
}