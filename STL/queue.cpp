#include <iostream>
#include <queue>


using namespace std;

int main()
{
    // Creation
    queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.size()<<endl;

    q.pop();
    q.pop();
    cout<<q.size()<<endl;

    if(q.empty()==true)
        cout<<"Queue empty"<<endl;
    else
        cout<<"Queue not empty"<<endl;

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    queue<int> q2;

    q2.push(1);
    q2.push(2);
    q2.push(3);
    q2.push(4);
    
    cout<<endl;
    q.swap(q2);
    cout<<q.front()<<" "<<q.back()<<endl;

    return 0;
}