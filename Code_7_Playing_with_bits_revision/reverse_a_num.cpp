#include <iostream>
using namespace std;

int main()
{
    int ans = 0, num;
    cout << "Enter the number : " << ends;
    cin >> num;

    while (num)
    {
        int rem = num % 10;
        ans = (ans * 10) + rem;
        num = num / 10;
    }

    cout << "Reverse of the number is : " << ans << endl;
    return 0;
}