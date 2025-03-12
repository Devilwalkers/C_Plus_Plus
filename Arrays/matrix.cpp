#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {10, 20, 100},
        {30, 40, 200},
        {50, 60, 300}};

    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cout << arr[row][col] << ", ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                cout << arr[i][j] << endl;
        }
    }

    return 0;
}