#include <iostream>
#include <list>


using namespace std;

int main()
{

    // Creation
    list<int> myList;
    list<int> arr1;
    arr1.push_back(10);
    arr1.push_back(20);
    arr1.push_back(30);
    arr1.insert(arr1.begin(),100); //100->10->20->30

    list<int> arr2;
    arr2.push_back(100);
    arr2.push_back(200);
    arr2.push_back(200);

    // Insertion
    myList.push_back(5);
    myList.push_back(30);
    myList.push_back(1);

    myList.push_front(10);
    myList.push_front(20);
    myList.push_front(30);

    cout<<"Before erase: "<<arr1.size()<<endl;
    arr1.erase(arr1.begin(),arr1.end());
    cout<<"After erase: "<<arr1.size()<<endl;

    

    // cout<<"Before Swap"<<endl;
    list<int>:: iterator it = arr1.begin();
    while(it != arr1.end()){
        cout<< *it <<endl;
        it++;
    }
     
    // arr1.swap(arr2);

    // cout<<"After Swap"<<endl;
    // list<int>:: iterator it2 = arr1.begin();
    // while(it2 != arr1.end()){
    //     cout<< *it2 <<endl;
    //     it2++;
    // }
    // cout<<"Before Remove"<<endl;
    // list<int>:: iterator it = myList.begin();
    // while(it != myList.end()){
    //     cout<< *it <<endl;
    //     it++;
    // }
     
    // myList.remove(30);

    // cout<<"After Remove"<<endl;
    // list<int>:: iterator it2 = myList.begin();
    // while(it2 != myList.end()){
    //     cout<< *it2 <<endl;
    //     it2++;
    // }

    // myList.pop_front();
    // myList.pop_back();

    // myList.clear();
    // cout <<myList.front()<<endl;
    // cout <<myList.back()<<endl;

    
    return 0;
}