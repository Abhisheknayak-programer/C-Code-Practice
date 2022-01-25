#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i<size ;i++){
        cout << arr[i] << ends;
    }
    cout << endl;
}

void swap_alternate(int arr[],int size){
    for(int i=0;i<size;i = i+2){
       if(i+1 < size){
        int first = i,second = i+1,temp;
        temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
       }
    }
    printArray(arr,size);
}

int main(){
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[5] = {2,3,4,5,6};
    swap_alternate(arr1,6);
    swap_alternate(arr2,5);

    return 0;
}