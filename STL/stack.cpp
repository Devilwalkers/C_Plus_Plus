#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    stack<int> s1;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s1.push(100);
    s1.push(200);
    s1.push(300);
    cout << s.size() << endl;

    s.pop();
    s.pop();

    cout << s.size() << endl;
    cout << s.top() << endl;

    if (s.empty() == true)
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    s.swap(s1);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;


}