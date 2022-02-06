#include<iostream>
#include<vector>
using namespace std;

void printvector(vector <int> &ans){
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << ends;
    }
    cout << endl;
}

void reverse(vector <int> &ans){
    int start = 0;
    int end = ans.size() - 1;
    while(start < end){
        swap(ans[start], ans[end]);
        start++;
        end--;
    }
}

void Sum_of_two_arrays(int arr1[],int size1,int arr2[],int size2){
    int maxSize_first = size1 - 1;
    int maxSize_second = size2 - 1;
    int carry = 0;
    vector <int> ans;

    while(maxSize_first>=0 && maxSize_second>=0){
        int val1 = arr1[maxSize_first];
        int val2 = arr2[maxSize_second];
        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        maxSize_first--;
        maxSize_second--;
    }

    while(maxSize_first >=0){
        int sum = arr1[maxSize_first] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        maxSize_first--;
    }

    while(maxSize_second >=0){
        int sum = arr2[maxSize_second] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        maxSize_second--;
    }

    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    reverse(ans);
    printvector(ans);
}

int main(){
    int arr1[3] = {1,2,3};
    int arr2[1] = {99};
    Sum_of_two_arrays(arr1,3,arr2,1);

    return 0;
}