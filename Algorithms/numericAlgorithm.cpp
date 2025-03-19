#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    vector<int> arr2;
    arr2.push_back(4);
    arr2.push_back(5);
    arr2.push_back(6);
    arr2.push_back(7);

    vector<int> first(5);
    iota(first.begin(), first.end(), 250);

        for (auto a : first)
    {
        cout << a << " ";
    }

    // vector<int> ans(arr.size());
    // partial_sum(arr.begin(),arr.end(),ans.begin());
    // for(auto i: ans)
    //     cout<<i<<", ";

    // cout<<endl;
    // int ans = inner_product(arr.begin(),arr.end(),arr2.begin(),0);
    // cout << ans << endl;

    // int total = accumulate(arr.begin(), arr.end(), 0);
    // cout<<total<<endl;
    return 0;
}