#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);

    vector<int> arr2;
    arr2.push_back(3);
    arr2.push_back(4);
    arr2.push_back(5);
    arr2.push_back(6);

    vector<int> result1;

    set_union(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(result1, result1.begin()));
    for (auto a : result1)
        cout << a << " ";
    cout << endl;
    vector<int> result2;

    set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(result2, result2.begin()));
    for (auto a : result2)
        cout << a << " ";
    cout << endl;
    vector<int> result3;

    set_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(result3, result3.begin()));
    for (auto a : result3)
        cout << a << " ";
    cout << endl;
    vector<int> result4;

    set_symmetric_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(result4, result4.begin()));
    for (auto a : result4)
        cout << a << " ";
    cout << endl;

    return 0;
}