#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
}

void sort_0_and_1(int arr[],int size){
    int start=0,end=size-1;
    while(start < end){
        while(arr[start] == 0 && start < end){
            start++;
        }
        while(arr[end] == 1 && start < end){
            end--;
        }
        if(arr[start] == 1 && arr[end] == 0 && start < end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    printArray(arr,5);
}

int main(){
    int arr[5]={0,1,0,1,1};
    sort_0_and_1(arr,5);

    return 0;
}