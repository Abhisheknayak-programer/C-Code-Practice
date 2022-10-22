#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, ans = 0, i = 0;
    cout << "Enter the binary number :" << ends;
    cin >> num;

    while (num)
    {
        int rem = num % 10;
        if (rem == 1)
        {
            ans = ans + pow(2, i);
        }
        num = num / 10;
        i++;
    }

    cout << "Decimal is : " << ans;
    return 0;
}