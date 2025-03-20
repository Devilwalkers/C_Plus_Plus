#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printDouble(int n)
{
    cout << 2 * n << ", ";
}
bool checkEven(int n)
{
    return (n & 1) == 0;
}
int main()
{

    vector<int> arr;
    arr.push_back(11);
    arr.push_back(11);
    arr.push_back(12);
    arr.push_back(12);
    arr.push_back(20);

    // auto it = unique(arr.begin(), arr.end());
    // arr.erase(it, arr.end());
    // for (auto a : arr){
    //     cout << a << " ";
    // }
    // cout<<endl;

    // rotate(arr.begin(), arr.begin() + 2, arr.end());
    // for (auto i : arr){
    //     cout << i << " ";
    // }

    // reverse(arr.begin(), arr.end());
    // for (auto it : arr){
    //     cout << it << endl;
    // }

    // int target = 11;
    // int ans = count_if(arr.begin(), arr.end(), checkEven);
    // cout << ans << endl;

    // sort(arr.begin(), arr.end());
    // for (auto it : arr)
    // {
    //     cout << it << endl;
    // }

    // int target= 11;
    // int ans = count(arr.begin(),arr.end(),target);
    // cout<< ans<<endl;

    // auto it = find_if(arr.begin(),arr.end(),checkEven);
    // cout<< *it<<endl;

    // for_each(arr.begin(),arr.end(),printDouble);

    // int target= 40;
    // auto it = find(arr.begin(),arr.end(),target);
    // cout<< *it<<endl;

    return 0;
}