#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(40);
    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(30);

    make_heap(arr.begin(), arr.end());
    // for (auto a : arr)
    //     cout << a << " ";
    // cout << endl;

    // insertion
    arr.push_back(55);
    push_heap(arr.begin(), arr.end());
    // for (auto a : arr)
    //     cout << a << " ";
    // cout << endl;

    // Deletion
    pop_heap(arr.begin(), arr.end());
    arr.pop_back();
    // for (auto a : arr)
    //     cout << a << " ";
    // cout << endl;
    sort_heap(arr.begin(), arr.end());

    for (auto a : arr)
        cout << a << " ";
    cout << endl;
    return 0;
}