//       A
//     A B A
//   A B C B A
// A B C D C B A

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

        int nextStart = row - 1;
        while (nextStart)
        {
            char ch = 'A' + nextStart - 1;
            cout << ch;
            nextStart--;
        }

        row++;
        cout << endl;
    }

    return 0;
}