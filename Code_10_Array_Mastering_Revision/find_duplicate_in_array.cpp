#include <iostream>
using namespace std;

int findDuplicateNumber(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }

    return -1;
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

    cout << "The Duplicate Number is : " << findDuplicateNumber(nums, size);

    return 0;
}