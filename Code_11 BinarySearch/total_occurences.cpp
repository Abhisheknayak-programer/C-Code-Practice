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

void totalOccurence(int arr[],int size,int key){
    int first_occurence = firstOccurence(arr,size,key);
    int last_occurence = lastOccurence(arr,size,key);

    int total_Occurence = (last_occurence - first_occurence) + 1;
    cout << "The total number of occurences of the number " << key << " is : " << total_Occurence << endl << endl;
}

int main(){
    int arr1[5] = {1,3,3,3,7};
    int arr2[10] = {1,2,3,4,5,5,5,5,5,15};

    totalOccurence(arr1,5,3);
    totalOccurence(arr2,10,5);

    return 0;
}