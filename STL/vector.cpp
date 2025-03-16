#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> marks;

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.push_back(50);

    // vector<vector<int>> arr(4,vector<int>(3,0));
    // int totalRows= arr.size();
    // int totalCols= arr[0].size();

    // Create Iterator
    // vector<int>:: iterator it= marks.begin();

    // while(it!= marks.end()){
    //     cout<< *it<<" ";
    //     it++;
    // }

    // For each loop
    // for(int i :marks){
    //     cout<<i<<" ";
    // }
    // marks.clear();

    // print(marks);

    // cout<<"Vector can hold: "<<marks.capacity()<<endl;
    // cout<<"Value at Vector: "<<marks.size()<<endl;
    // cout<<"Maximum element in Vector: "<<marks.max_size()<<endl;

    // cout<<marks[2]<<endl;
    // cout<<marks.at(1)<<endl;

    // print(marks);

    // if(marks.empty()==true)
    //     cout<<"Vector is empty"<<endl;
    // else
    // cout<<"Vector is not empty"<<endl;

    // marks.pop_back();

    // cout<<*marks.begin()<<endl;
    // cout<<*marks.end()<<endl;
    // print(marks);

    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;

    // marks.pop_back();

    // 2d vector

    vector<vector<int>> arr(5, vector<int>(4, 0));
    int totalRows = arr.size();
    int totalCols = arr[0].size();

    // cout << totalRows << endl;

    vector<vector<int>> brr(5);
    brr[0] = vector<int>(3);
    brr[1] = vector<int>(4);
    brr[2] = vector<int>(1);
    brr[3] = vector<int>(4);
    brr[4] = vector<int>(3);
    int totalRowCount = brr.size(); // for Rows
    cout<<brr[0].size()<<endl;

    // int totalRowCount = brr[0].size(); // Column
    return 0;
}