#include <iostream>
using namespace std;

int main()
{
    // Unary Operators
    cout<<"Unary Operators"<<endl;

    int a = 5;
    cout << "Before increment ++ :" << a << endl;
    cout << "Pre increment " << ++a << endl;
    cout << "Post increment " << a++ << endl;
    cout << "After increment ++ :" << a << endl;
    cout << endl;
    cout << "Before increment -- :" << a << endl;
    cout << "Pre increment " << --a << endl;
    cout << "Post increment " << a-- << endl;
    cout << "After increment -- :" << a << endl;

    // Arithmetic Operators
    cout<<"Arithmetic Operators"<<endl;

    int num1 = 15;
    int num2 = 3;
    cout << (num1 + num2) << endl;
    cout << (num1 - num2) << endl;
    cout << (num1 * num2) << endl;
    cout << (num1 / num2) << endl;
    cout << (num1 % num2) << endl;

    //Relational Operators
    cout<<"Relational Operators"<<endl;
    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;

    return 0;
}