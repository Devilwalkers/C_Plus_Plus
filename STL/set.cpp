#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;
int main()
{
    set<int> st;
    st.insert(20);
    st.insert(10);
    st.insert(22);
    st.insert(15);

    set<int>::iterator it = st.begin();

    while (it != st.end())
    {
        cout << *it<< endl;
        it++;
    }
    cout<<st.size()<<endl;

    st.erase(st.begin(),st.end());

    if(st.find(15)!=st.end()){
        cout<<"Key found!"<<endl;
    }
    else{
        cout<<"Key not found!"<<endl;
    }

    return 0;
}