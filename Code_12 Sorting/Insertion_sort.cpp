#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
}

void InsertionSort(int arr[],int size){
    // The loop goes from the second Index of the array to the last
    for(int i=1;i<size;i++){
        // Here temp variable is created to store the index value of the element of the first array and j is initialised so that that can be use inside the loop again
        int temp = arr[i],j;

        // All the values less than i are stored and itterated by the j
        for(j = i-1; j>=0; j--){
            // previous index of the temp is compared with itself and if condition satisfied then the next index value is changed with the element compared 
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        
        // Atlast the value is stored next index of the j
        arr[j+1] = temp;

    }

    // Printing the array 
    PrintArray(arr,size);
}

int main(){
    int arr[7] = {12,34,456,1,3,5,345};
    InsertionSort(arr,7);

    return 0;
}