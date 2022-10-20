//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int range, row = 1;
    cout << "Enter the row : " << ends;
    cin >> range;

    for (int i = 1; i <= range; i++)
    {
        int space = range - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int stars = i;
        while (stars)
        {
            cout << " *";
            stars--;
        }

        row++;
        cout << endl;
    }

    return 0;
}