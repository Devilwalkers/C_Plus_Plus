#include <iostream>
using namespace std;

void zeroOne(int arr[], int n)
{   
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0)
            zeroCount++;
        if(arr[i]==1)
            oneCount++;
    }
    int i;
    for(i = 0;i<zeroCount;i++){
        arr[i]=0;
    }
    for(int j = i; j < n; j++){
        arr[j]=1;
    }
    for(i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int arr[] = {1,1,1,0,1,0,1,0,0,0,1,1,1};
    int n = 13;
    zeroOne(arr, n);
    return 0;
}