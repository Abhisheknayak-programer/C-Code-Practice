// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include <iostream>
using namespace std;

int main()
{
    int range;
    cout << "Enter your range : " << ends;
    cin >> range;

    for (int i = 1; i <= range; i++)
    {
        // Print the first triangle
        int row = 1;
        while (row <= range - i + 1)
        {
            cout << row;
            row++;
        }

        // Print the stars
        int star = (i - 1) * 2;
        while (star)
        {
            cout << "*";
            star--;
        }

        // Print the reverse traingle
        int col = range - i + 1;
        while (col > 0)
        {
            cout << col;
            col--;
        }

        cout << endl;
    }

    return 0;
}