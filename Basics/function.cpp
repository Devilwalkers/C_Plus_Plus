#include <iostream>
using namespace std;

void counting(){
    for (int i = 1; i <= 5; i++){
        cout << i << " ";
    }
    cout << endl;
}
int sum(int a, int b){
    int sum = 0;
    sum = a + b;
    return sum;
}
float float1(float a, float b){
    float sum = 0.0;
    sum = a + b;
    return sum;
}
int main(){

    counting();

    int answer = sum(5, 6);
    cout << answer << endl;

    float answer1 = float1(5.0, 8.5);
    cout << answer1 << endl;

    return 0;
}