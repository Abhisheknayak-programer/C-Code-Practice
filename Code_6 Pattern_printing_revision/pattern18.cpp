// A
// B C
// C D E
// D E F G

#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter the row" << endl;
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        char c = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }

    return 0;
}