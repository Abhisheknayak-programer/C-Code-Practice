// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter total row : " << ends;
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = row - i + 1; j > 0; j--)
        {
            cout << j << ends;
        }
        cout << endl;
    }

    return 0;
}