// * * * *
//  * * *
//   * *
//    *
//   * *
//  * * *
// * * * *

#include <iostream>
using namespace std;

int main()
{

    int range, row = 1;
    cout << "Enter your range : " << ends;
    cin >> range;

    for (int i = range; i > 0; i--)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        int star = i;
        while (star)
        {
            cout << " *";
            star--;
        }

        row++;
        cout << endl;
    }

    for (int i = 2; i <= range; i++)
    {
        int space = range - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        int star = i;
        while (star)
        {
            cout << " *";
            star--;
        }

        cout << endl;
    }

    return 0;
}