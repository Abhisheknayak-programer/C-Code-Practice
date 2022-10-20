//       *
//     * *
//   * * *
// * * * *

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

        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}