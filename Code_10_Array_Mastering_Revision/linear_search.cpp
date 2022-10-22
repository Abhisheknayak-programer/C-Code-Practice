#include <iostream>
using namespace std;

bool linearSearch(int arr[], int len, int num)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int nums[100], size, key;
    cout << "Enter the size of the array : " << ends;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i + 1 << ": " << ends;
        cin >> nums[i];
    }

    cout << endl;
    cout << "Enter the Number you need to search : " << ends;
    cin >> key;

    bool val = linearSearch(nums, size, key);
    if (val)
    {
        cout << "The Element found inside the array :)";
    }
    else
    {
        cout << "Element Not Found!";
    }

    return 0;
}