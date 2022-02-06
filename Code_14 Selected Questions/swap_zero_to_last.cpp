#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
    cout << endl;
}

void swap_Zero_to_Last(int arr[],int size){
    int NonZeroIndex = 0;

    for(int i=0;i<size;i++){
        if(arr[i] != 0){
            swap(arr[NonZeroIndex],arr[i]);
            NonZeroIndex++;
        }
    }

    printArray(arr,size);
}

int main(){
    int arr[6] = {0,1,0,3,1,2};
    swap_Zero_to_Last(arr,6);

    return 0;
}