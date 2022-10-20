// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter total row : " << ends;
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= row - i; j++)
        {
            cout << "*" << ends;
        }
        cout << endl;
    }

    return 0;
}