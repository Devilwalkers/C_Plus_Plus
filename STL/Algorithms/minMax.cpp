#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a = 10, b = 5;

    // cout << min(a, b) << endl;
    // cout << min(a, b) << endl;

    // min and max in a range
    vector<int> arr;
    arr.push_back(40);
    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(30);

    auto it = min_element(arr.begin(), arr.end());
    cout << *it <<endl;

    auto it2 = max_element(arr.begin(), arr.end());
    cout << *it2 <<endl;

    return 0;
}