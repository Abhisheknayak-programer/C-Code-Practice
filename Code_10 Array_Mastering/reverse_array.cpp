#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i<size ;i++){
        cout << arr[i] << ends;
    }
}

// HERE TWO POINTER APPROACH IS USED TO SOLVE THE PROBLEM 
void reverse_array(int arr[],int size){
    int start = 0,end = size-1;
    while(start<=end){
        int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
    }
    printArray(arr,size);
}

int main(){
    int arr[5] = {2,3,4,5,6};
    reverse_array(arr,5);

    return 0;
}

