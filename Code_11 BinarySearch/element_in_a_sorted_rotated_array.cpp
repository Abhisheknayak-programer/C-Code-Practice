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

int BinarySearch(int arr[],int s,int e,int key){
    int start = s,end = e;
    int mid = start + ((end - start)/2);

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + ((end - start)/2);
    }

    return -1;
}

int findPosition_of_element(int arr[],int size,int key){
    int pivot = getpivot(arr,size); 
    if(key >= arr[pivot] && key <= arr[size-1]){
        return BinarySearch(arr,pivot,size-1,key);
    }else{
        return BinarySearch(arr,0,pivot-1,key);
    }
}

int main(){
    int arr[5] = {7,9,1,2,3};
    cout << "The element is found in the Index : " << findPosition_of_element(arr,5,9);

    return 0;
}