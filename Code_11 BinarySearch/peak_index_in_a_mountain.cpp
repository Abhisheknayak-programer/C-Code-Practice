#include<iostream>
using namespace std;

int peak_in_a_mountain(int arr[],int size){
    int start = 0,end = size-1;
    int mid = start + ((end - start)/2);
    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + ((end - start)/2);        
    }
    return start;
}


int main(){
    int arr1[4] = {1,4,2,0};
    int arr2[3] = {0,1,0};
    int arr3[4] = {0,5,10,2};

    cout << "The Peak Index of the given array shaped as a mountain is : " << peak_in_a_mountain(arr1,4) << endl;
    cout << "The Peak Index of the given array shaped as a mountain is : " << peak_in_a_mountain(arr2,3) << endl;
    cout << "The Peak Index of the given array shaped as a mountain is : " << peak_in_a_mountain(arr3,4) << endl;

    return 0;
}