// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
    int range, row = 1;
    cout << "Enter your range : " << ends;
    cin >> range;

    while (row <= range)
    {
        int star = row;
        while (star)
        {
            cout << "*";
            star--;
        }

        row++;
        cout << endl;
    }

    int secondRow = range - 1;

    while (secondRow > 0)
    {
        int star = secondRow;
        while (star)
        {
            cout << "*";
            star--;
        }

        secondRow--;
        cout << endl;
    }

    return 0;
}