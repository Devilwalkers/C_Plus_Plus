#include<iostream>
using namespace std;

int main(){

	//Implicit Conversion
	// Int to Float
	// int num1 = 10;
	// float num2 = 5.5;
	// float result = num1 + num2;
	// cout << result << endl;

	// // Char to Int
	// char ch = 'A';
	// int num = ch + 1;
	// cout << num << endl;

	// // Int to Char
	// int a = 75;
	// char ch1 = a;
	// cout << ch1 << endl;
	// return 0;

	// Explicit Conversion
	// Double to int
	double pi = 3.14159265;
	int intPi = (int)pi;
	cout << intPi << endl;

	// Float to char
	float far = 333.152;
	char cha = (char)far;
	cout << cha << endl;
	
	//Int to Float
	int a1 = 20;
	float res1 = (float)a1 + 32.5;
	cout << res1 << endl;

	return 0;

}