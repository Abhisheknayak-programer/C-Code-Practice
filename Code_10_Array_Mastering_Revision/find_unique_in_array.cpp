#include <iostream>
using namespace std;

int getUniqueElement(int arr[], int len)
{
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int nums[100], size;
    cout << "Enter the size of the array : " << ends;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i + 1 << ": " << ends;
        cin >> nums[i];
    }

    cout << getUniqueElement(nums, size);

    return 0;
}