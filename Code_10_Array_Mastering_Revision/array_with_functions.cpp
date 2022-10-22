#include <iostream>
using namespace std;

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ends;
    }
}

int main()
{
    int nums[10] = {2, 3, 4, 5, 6};
    int size = sizeof(nums) / sizeof(int);

    printArray(nums, size);
    
    return 0;
}