#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(23);
    pq.push(34);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    pq.pop();
    pq.pop();

    cout<<pq.size()<<endl;

    if(pq.empty()==true)
        cout<<"Queue is empty"<<endl;
    else
    cout<<"Queue is not empty"<<endl;

    return 0;
}