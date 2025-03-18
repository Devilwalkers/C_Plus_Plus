#include <iostream>
#include <queue>
using namespace std;
int main()
{
    deque<int> s;
    deque<int> s1;

    s.push_back(10);
    s.push_back(20);
    s.push_back(30);

    s1.push_back(100);
    s1.push_back(200);
    s1.push_back(300);

    cout << s.front() << endl;
    cout << s.back() << endl;
    // s.clear();
    deque<int>::iterator i = s.begin();
    while (i != s.end())
    {
        cout << *i << ", ";
        i++;
    }
    
    cout << endl;

    cout << s.at(1) << endl;
    s.swap(s1);
    s.insert(s.begin(), 40);
    deque<int>::iterator it = s.begin();
    while (it != s.end())
    {
        cout << *it << ", ";
        it++;
    }
    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;
}