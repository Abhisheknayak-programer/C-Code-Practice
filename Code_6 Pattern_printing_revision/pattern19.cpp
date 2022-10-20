// D
// C D
// B C D
// A B C D

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the rowber Upto which you want to see the pattern : " << ends;
    cin >> row;
    cout << endl;

    for (int i = 1; i <= row; i++)
    {
        char c = 'A' + row - i;

        for (int j = 1; j <= i; j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }

    return 0;
}