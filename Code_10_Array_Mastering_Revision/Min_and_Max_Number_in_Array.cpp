#include <iostream>
using namespace std;

int getMaxNumber(int arr[], int len)
{
    int maxx = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }

    return maxx;
}

int getMinNumber(int arr[], int len)
{
    int minn = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] < minn)
        {
            minn = arr[i];
        }
    }

    return minn;
}

int main()
{
    int size;
    int nums[100];
    cout << "Enter the size of the array : " << ends;
    cin >> size;
    // int size = sizeof(nums) / sizeof(int);  //formula to get the full length of the array

    // Taking the input from the user and storing that inside the array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": " << ends;
        cin >> nums[i];
    }

    int min = getMinNumber(nums, size);
    int max = getMaxNumber(nums, size);

    cout << "The Maximum Number is : " << max << " and the Minimum Number is : " << min;

    return 0;
}