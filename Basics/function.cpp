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

char alphabet1(char a){
    return a;
}

void printName();

int ConvertIntoCelcius(int far){
    int cel = (far-32)*5/9;
    return cel;
}

int main(){

    counting();

    int answer = sum(5, 6);
    cout << answer << endl;

    float answer1 = float1(5.0, 8.5);
    cout << answer1 << endl;

    char alphabet = alphabet1('C');
    cout << alphabet << endl;

    printName();

    int cel = ConvertIntoCelcius(102);
    cout << cel << endl;

    return 0;
}

void printName(){
    cout<< "Sagar Paul" << endl;
}