//    A
//   ABC
//  ABCDE
// ABCDEFG

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
            char c = 'A' + col - 1;
            cout << c;
            col++;
        }

        int nextSide = row - 1;
        char ch = 'A' + row;
        while (nextSide)
        {
            cout << ch++;
            nextSide--;
        }

        row++;
        cout << endl;
    }

    return 0;
}