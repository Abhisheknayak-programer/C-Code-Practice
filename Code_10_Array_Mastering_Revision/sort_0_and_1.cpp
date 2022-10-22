#include <iostream>
using namespace std;

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ends;
    }
}

void sortZeroesAndOne(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        while (arr[start] == 0)
        {
            start++;
        }
        while (arr[end] == 1)
        {
            end--;
        }
        if (arr[start] == 1 && arr[end] == 0 && start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main()
{
    int arr[10] = {0, 1, 1, 0, 0, 0, 1, 0, 0, 1};
    sortZeroesAndOne(arr,10);
    printArray(arr,10);

    return 0;
}