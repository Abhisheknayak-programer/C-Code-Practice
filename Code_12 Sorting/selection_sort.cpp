#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
}

void SelectionSort(int arr[],int size){
    // Implementation of the select and sort small elements in a particular order
    for(int i=0;i<size-1;i++){
        // Storing the min index and then if we got any other less index then just changing it with that
        int minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        // Swapping the minIndex element of the array with the the array index
        swap(arr[i],arr[minIndex]);
    }

    // Print the array
    PrintArray(arr,size);
}


int main(){
    int arr[5] = {11,9,2,7,5};
    SelectionSort(arr,5);

    return 0;
}