// * * * *
//   * * *
//     * *
//       *

#include <iostream>
using namespace std;

int main()
{
    int range, row = 1;
    cout << "Enter the range" << ends;
    cin >> range;

    while (row <= range)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        int star = range - row + 1;
        while (star)
        {
            cout << "*";
            star--;
        }

        cout << endl;
        row++;
    }

    return 0;
}