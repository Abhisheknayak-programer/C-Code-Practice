#include <iostream>
using namespace std;

void swapAlternatives(int arr[], int len)
{
    for (int i = 0; i < len; i += 2)
    {
        if (i + 1 < len)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ends;
    }
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

    swapAlternatives(nums, size);
    printArray(nums, size);

    return 0;
}