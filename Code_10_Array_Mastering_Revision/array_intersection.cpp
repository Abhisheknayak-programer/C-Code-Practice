#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ends;
    }
}

int main()
{
    int arr1[5] = {1, 2, 4, 5, 6};
    int arr2[5] = {2, 3, 5, 10, 11};

    int start1 = 0;
    int start2 = 0;
    vector<int> ans;

    while (start1 < 5 && start2 < 5)
    {
        if (arr1[start1] < arr2[start2])
        {
            start1++;
        }
        if (arr1[start1] > arr2[start2])
        {
            start2++;
        }
        if (arr1[start1] == arr2[start2])
        {
            ans.push_back(arr1[start1]);
            start1++;
            start2++;
        }
    }

    printArray(ans);

    return 0;
}