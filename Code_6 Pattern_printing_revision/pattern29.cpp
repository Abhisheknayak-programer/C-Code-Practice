//       *
//     * * *
//   * * * * *
// * * * * * * *

#include <iostream>
using namespace std;

int main()
{
    int range, row = 1;
    cout << "Enter the range" << ends;
    cin >> range;

    while (row <= range)
    {
        int space = range - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int star = row * 2 - 1;
        while (star)
        {
            cout << "*";
            star--;
        }

        row++;
        cout << endl;
    }

    return 0;
}