#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << "  ";
        }

        cout << endl;
    }
}

vector<vector<int>> pairSum(int arr[], int s, int len)
{
    vector<vector<int>> ans;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            for (int k = j + 1; k < len; k++)
            {
                int val = arr[i] + arr[j] + arr[k];
                if (val == s)
                {
                    vector<int> a;
                    a.push_back(arr[i]);
                    a.push_back(arr[j]);
                    a.push_back(arr[k]);
                    ans.push_back(a);
                }
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int sumVal;
    cout << "Enter the sum value : " << ends;
    cin >> sumVal;
    int arr[10] = {2, 3, 5, 10, 11, 0, -6, 234, 1, 23};
    vector<vector<int>> val = pairSum(arr, sumVal, 10);
    printArray(val);

    return 0;
}