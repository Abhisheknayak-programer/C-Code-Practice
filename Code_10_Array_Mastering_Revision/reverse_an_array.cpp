#include <iostream>
using namespace std;

void ReverseArray(int arr[], int len)
{
    int start = 0, end = len - 1;
    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
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

    ReverseArray(nums, size);
    printArray(nums, size);

    return 0;
}