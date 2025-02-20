#include <iostream>
using namespace std;

int votingSystem(int age)
{
    if (age < 18)
    {
        cout << "You are not eligible to vote." << endl;
    }
    else
    {
        cout << "You are eligible to vote." << endl;
    }
    return age;
}
int gradeSystem(int marks)
{
    if (marks > 90)
    {
        cout << "A+" << endl;
    }
    else if (marks > 70)
    {
        cout << "A" << endl;
    }
    else if (marks > 55)
    {
        cout << "B" << endl;
    }
    else if (marks > 40)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "D" << endl;
    }
    return marks;
}
int main()
{

    int age, marks;
    // cout<<"Enter your age: "<<endl;
    // cin>>age;
    // votingSystem(age);

    cout<<"Enter your marks: "<<endl;
    cin >> marks;
    gradeSystem(marks);

    return 0;
}