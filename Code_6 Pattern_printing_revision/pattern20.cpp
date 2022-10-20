// 4
// 3 4
// 2 3 4
// 1 2 3 4

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the row" << ends;
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        int val = row - i;
        for (int j = 0; j <= i; j++)
        {
            cout << val++ << " ";
        }
        cout << endl;
    }

    return 0;
}