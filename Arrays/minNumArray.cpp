#include <iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[], int n)
{
	int minAns = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minAns)
			minAns = arr[i];
	}
	return minAns;
}

int findMax(int arr[], int n)
{
	int maxAns = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxAns)
			maxAns = arr[i];
	}
	return maxAns;
}

int main()
{

	int arr[] = {5, 2, 1, 7, 9, -2};
	int n = 6;

	cout << "Minimum number:"<<findMin(arr, n) << endl;
	cout << "Maximum number:"<<findMax(arr, n) << endl;

	return 0;
}