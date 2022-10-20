// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

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

        int space = (range * 2) - (row * 2);
        while (space)
        {
            cout << " ";
            space--;
        }

        int star2 = row;
        while (star2)
        {
            cout << "*";
            star2--;
        }

        row++;
        cout << endl;
    }

    int secondRow = range - 1;
    int spaceBlock = 2;

    while (secondRow > 0)
    {
        int star = secondRow;
        while (star)
        {
            cout << "*";
            star--;
        }

        int space = (spaceBlock - 1) * 2;
        while (space)
        {
            cout << " ";
            space--;
        }

        int star2 = secondRow;
        while (star2)
        {
            cout << "*";
            star2--;
        }

        secondRow--;
        spaceBlock++;
        cout << endl;
    }

    return 0;
}