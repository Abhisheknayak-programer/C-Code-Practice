#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size,int key){
    int start = 0,end = size-1;
    int mid = start + ((end - start)/2);
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + ((end - start)/2);
    }
   
    return ans;
}

int lastOccurence(int arr[],int size,int key){
    int start = 0,end = size-1;
    int mid = start + ((end - start)/2);
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + ((end - start)/2);
    }
   
    return ans;
}

void OccurencePrinter(int arr[],int size,int key){
    cout << "The first occurence of the number " << key << " is : " <<firstOccurence(arr,size,key) << endl;
    cout << "The last occurence of the number " << key << " is : " <<lastOccurence(arr,size,key) << endl << endl;
}

int main(){
    int arr1[5] = {1,3,3,3,7};
    int arr2[10] = {1,2,3,4,5,5,5,5,5,15};

    OccurencePrinter(arr1,5,3);
    OccurencePrinter(arr2,10,5);

    return 0;
}