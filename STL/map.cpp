#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;
int main()
{
    map<string, string> um;
    unordered_map<string, string> um1;

    // Insertion methods
    um["br"] = "Brazil"; // method 1

    um.insert(make_pair("in", "India")); // method 2

    pair<string, string> p; // method 3
    p.first = "en";
    p.second = "England";
    um.insert(p);

    // cout << um.at("en") << endl;

    um.at("en") = "England 2";
    // cout << um.at("en") << endl;

    um.at("en") = "England 3";
    // cout << um.at("en") << endl;
    // um.clear();
    map<string, string>::iterator it = um.begin();

    while (it != um.end())
    {
        pair<string, string> p = *it;
        cout << p.first << ", " << p.second << endl;
        it++;
    }

    um1["1"] = "Intro";
    um1["2"] = "C++";
    um1["3"] = "DSA";

    // um.swap(um1);
    // unordered_map<string, string>::iterator it = um.begin();

    // while (it != um.end())
    // {
    //     pair<string, string> p = *it;
    //     cout << p.first << ", " << p.second << endl;
    //     it++;
    // }
    um1.erase(um1.begin(),um1.end());
    cout<<um1.size()<<endl;

    if(um.find("in")!=um.end()){
        cout<<"Key found!"<<endl;
    }
    else{
        cout<<"Key not found!"<<endl;

    }
    if(um.count("in") == 0){
        cout<<"Key not found!"<<endl;
    }
    if(um.count("in") == 1){
        cout<<"Key not found!"<<endl;
    }

    return 0;
}