//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

#include <iostream>
using namespace std;

int main()
{
    int range, row = 1;
    cout << "Enter the number of rows : ";
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

        int nextStart = row - 1;
        while (nextStart)
        {
            cout << "*";
            nextStart--;
        }

        row++;
        cout << endl;
    }

    int secondRow = 1;
    while (secondRow < range)
    {
        int secondSpace = secondRow;
        while (secondSpace)
        {
            cout << " ";
            secondSpace--;
        }

        int star = range - secondRow;
        while (star)
        {
            cout << "*";
            star--;
        }

        int leftOutStar = range - secondRow - 1;
        while (leftOutStar)
        {
            cout << "*";
            leftOutStar--;
        }

        secondRow++;
        cout << endl;
    }

    return 0;
}