// 1 2 3 4
//   2 3 4
//     3 4
//       4

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


        int nums = row;
        while (nums <= range)
        {
            cout << nums;
            nums++;
        }

        cout << endl;
        row++;
    }

    return 0;
}