#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter the number: "<< endl;
  cin>>num;
  if((num & 1) == 0){
    cout<<"Even number: "<<num<<endl;
  }
  else{
    cout<<"Odd number: "<<num<<endl;

  }
  return 0;

}