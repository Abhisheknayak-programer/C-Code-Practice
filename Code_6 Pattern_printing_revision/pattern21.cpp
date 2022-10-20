// 5
// 4 3
// 3 2 1
// 2 1 0 -1

#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter the row" << ends;
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        int val = row - i + 1;
        for (int j = 0; j <= i; j++)
        {
            cout << val-- << " ";
        }
        cout << endl;
    }

    return 0;
}