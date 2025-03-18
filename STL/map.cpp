#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;
int main()
{
    unordered_map<string,string> um;

    //Insertion methods
    um["br"]= "Brazil";// method 1

    um.insert(make_pair("in", "India")); // method 2

    pair<string, string> p;// method 3
    p.first ="en";
    p.second ="England";
    um.insert(p);
    
    cout<<um.at("en")<<endl;

    

    return 0;
}