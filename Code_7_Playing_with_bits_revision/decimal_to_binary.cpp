#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, ans = 0, i = 0;
    cout << "Enter the Number :" << ends;
    cin >> num;

    while (num)
    {
        int bit = num & 1;
        ans = (bit * pow(10, i)) + ans;
        num = num >> 1;
        i++;
    }

    cout << "Answer is : " << ans;

    return 0;
}