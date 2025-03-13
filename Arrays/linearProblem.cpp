#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 6, val = 5;
    int arr[] = {2, 3, 4, 8, 5};

    cout << linearSearch(arr, n, val) << endl;
    ;

    return 0;
}