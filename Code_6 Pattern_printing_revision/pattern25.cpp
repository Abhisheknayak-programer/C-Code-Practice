//       1
//     2 2
//   3 3 3
// 4 4 4 4

#include <iostream>
using namespace std;

int main()
{
    int range, row = 1;
    cout << "Enter the range : " << ends;
    cin >> range;

    while (row <= range)
    {
        int space = range - row;

        while(space){
            cout << " ";
            space--;
        }

        int col = 1;
        while(col <= row){
            cout << row;
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}