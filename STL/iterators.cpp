#include <iostream>
#include <vector>
#include <algorithm>
#include <forward_list>
#include <list>

using namespace std;

int main()
{
    // Random access Iterator
    vector<int> arr = {1, 2, 3, 4, 5};

    // vector<int>::iterator it = arr.begin();

    // while (it != arr.end())
    // {
    //     //write
    //     (*it)+=5;
    //     //read
    //     cout<<*it<<" ";
    //     //forward move
    //     it++;
    // }
    // cout<<endl;

    // lets try backward movement
    vector<int>::iterator it = arr.end() - 1;

    while (it != arr.begin())
    {
        //write
        (*it)+=5;
        //read
        cout<<*it<<" ";
        //forward move
        it--;
    }
    cout<<endl;

    // Bi-directional Iterator
    // list<int> myList;
    // myList.push_front(1);
    // myList.push_front(2);
    // myList.push_front(3);
    // myList.push_front(4);

    // Lets try moving backward
    // list<int>::iterator it = myList.end();

    // while (it != myList.begin())
    // {
    //     it--;
    //     (*it) += 2;

    //     cout << *it << " ";
    // }

    // Travarse using iterator
    // list<int>::iterator it2 = myList.begin();

    // while (it2 != myList.end())
    // {
    //     (*it2) += 2;
    //     cout << *it2 << " ";
    //     it2++;
    // }
    // cout << endl;

    // Forward Iterator
    // forward_list<int> arr;
    // arr.push_front(1);
    // arr.push_front(2);
    // arr.push_front(3);
    // arr.push_front(4);

    // Travarse using iterator
    // forward_list<int>::iterator it = arr.begin();

    // while (it != arr.end())
    // {
    //     (*it) += 5;
    //     cout << *it << " ";
    //     it++;
    // }
    // cout << endl;

    // vector<int>::iterator it = arr.begin();

    // for (it; it < arr.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // while (it != arr.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }
    // cout << endl;

    return 0;
}