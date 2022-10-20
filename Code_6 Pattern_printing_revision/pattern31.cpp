//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

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

        int nums = 1;
        while (nums <= row)
        {
            cout << nums;
            nums++;
        }

        int nextNums = row - 1;
        while (nextNums)
        {
            cout << nextNums;
            nextNums--;
        }

        row++;
        cout << endl;
    }

    return 0;
}