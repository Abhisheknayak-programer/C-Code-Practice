#include<iostream>
using namespace std;

int getpivot(int arr[],int size){
    int start = 0,end = size-1;
    int mid = start + ((end - start)/2);

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + ((end - start)/2);
    }

    return start;
}

int main(){
    int arr1[5] = {18,22,4,7,9};
    int arr2[5] = {7,0,1,2,3};
    int arr3[5] = {11,12,3,4,5};

    cout << "The Pivot element of the array is : " << getpivot(arr1,5) << endl; 
    cout << "The Pivot element of the array is : " << getpivot(arr2,5) << endl; 
    cout << "The Pivot element of the array is : " << getpivot(arr3,5) << endl; 

    return 0;
}