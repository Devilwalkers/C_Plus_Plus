#include <iostream>
#include <vector>

#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    // int target = 400;
    // bool it = binary_search(arr.begin(),arr.end(),target); //0 means false, 1 means true
    // cout<< it<<endl;

    int lb=35;
    auto it = lower_bound(arr.begin(),arr.end(),lb);
    cout<<*it<<endl;

    int ub=10;
    auto it2 = upper_bound(arr.begin(),arr.end(),ub);
    cout<<*it2<<endl;

    
    return 0;
}