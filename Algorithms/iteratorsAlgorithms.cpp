#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printDouble(int n){
	cout<<2*n<<", ";
}
bool checkEven(int n){
	return (n & 1) == 0;
}
int main(){

	vector<int> arr;
    arr.push_back(11);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(11);
    arr.push_back(11);

    int target= 11;
    
    int ans = count_if(arr.begin(),arr.end(),checkEven);
    cout<< ans<<endl;



    // int target= 11;
    
    // int ans = count(arr.begin(),arr.end(),target);
    // cout<< ans<<endl;

    // auto it = find_if(arr.begin(),arr.end(),checkEven);
    // cout<< *it<<endl;

    // for_each(arr.begin(),arr.end(),printDouble);

    // int target= 40;
    
    // auto it = find(arr.begin(),arr.end(),target);
    // cout<< *it<<endl;



	return 0;
}