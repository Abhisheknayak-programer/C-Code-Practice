#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
}

void bubble_sort(int arr[],int size){
    // The i variable starts from 1 to the size of the array so that each and every element will be compared inside the array
    for(int i=1;i<size;i++){
        // The j variable starts from 0 to 2nd last element of the array because the last element will be already sorted if all other are sorted :)
        for(int j=0;j<size-i;j++){
            // Here comapring is done whether the element present at the j+1th index element is less than the jth index element or not
            if(arr[j+1] < arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }

    // Printing the array
    PrintArray(arr,size);
}

int main(){
    int arr[5] = {45,67,5,4,1};
    bubble_sort(arr,5);

    return 0;
}