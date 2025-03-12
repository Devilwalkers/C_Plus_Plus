#include <iostream>
using namespace std;

int uniqueElement(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{

    int arr[] = {12, 2, 13, 2, 8, 9, 13, 8, 9, 12, 6};
    int n = 11;
    cout << uniqueElement(arr, n) << endl;
    ;
    return 0;
}