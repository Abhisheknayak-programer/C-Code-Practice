#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start = 0,end = size-1;
    int mid = (start+end)/2;
    
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }   
        else if(arr[mid] > key){
            end = mid-1;
        }else if(arr[mid] < key){
            start = mid+1;
        }

        mid = (start+end)/2;
    }

    return -1;
}

int main(){
    int arr[5] = {1,3,5,7,8};
    cout << "The Element 3 is found in Index : " << BinarySearch(arr,5,3) << endl;;
    cout << "The Element 7 is found in Index : " << BinarySearch(arr,5,7) << endl;;
    return 0;
}