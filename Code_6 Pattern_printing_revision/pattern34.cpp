// * * * * *
//   * * *
//     *

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

        int stars = i * 2 - 1;
        while (stars)
        {
            cout << "*";
            stars--;
        }

        row++;
        cout << endl;
    }

    return 0;
}