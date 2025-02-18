#include <iostream>
using namespace std;

int main()
{
    // Unary Operators
    cout << "Unary Operators" << endl;

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
    cout << "Arithmetic Operators" << endl;

    int num1 = 15;
    int num2 = 3;
    cout << (num1 + num2) << endl;
    cout << (num1 - num2) << endl;
    cout << (num1 * num2) << endl;
    cout << (num1 / num2) << endl;
    cout << (num1 % num2) << endl;

    // Relational Operators
    cout << "Relational Operators" << endl;
    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;

    // Assignment Operators
    cout << "Assignment Operators" << endl;

    int x = 10;
    x += 5;
    cout << x << endl;
    x -= 5;
    cout << x << endl;
    x *= 5;
    cout << x << endl;
    x /= 5;
    cout << x << endl;
    x %= 5;
    cout << x << endl;

    // Logical Operators
    cout << "Logical Operators" << endl;
    int p = 5;
    int q = 6;

    cout << (p && q) << endl;
    cout << (p || q) << endl;
    cout << (!p) << endl;

    //Bitwise Operators
    cout << "Bitwise Operators" << endl;
    int m = 5,n = 7;
    cout << (m & n) << endl;
    cout << (m | n) << endl;
    cout << (m ^ n) << endl;
    cout << (~m) << endl;
    cout << (m << 1) << endl;
    cout << (m >> 1) << endl;



    return 0;
}