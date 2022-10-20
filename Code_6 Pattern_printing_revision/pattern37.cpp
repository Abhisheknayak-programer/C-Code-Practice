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
        int stars = range - row + 1;
        while (stars)
        {
            cout << "*";
            stars--;
        }

        int space = (row - 1) * 2;
        while (space)
        {
            cout << " ";
            space--;
        }

        int stars2 = range - row + 1;
        while (stars2)
        {
            cout << "*";
            stars2--;
        }

        row++;
        cout << endl;
    }

    return 0;
}