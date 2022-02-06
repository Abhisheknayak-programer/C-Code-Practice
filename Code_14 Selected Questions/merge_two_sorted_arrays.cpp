#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
    cout << endl;
}

void mergeTwoSortedArrays(int arr1[],int size1,int arr2[],int size2,int arr3[],int size3){
    int i=0,j=0,k=0;

    while(i<size1 && j<size2){
        if(arr1[i] > arr2[j]){
            arr3[k] = arr2[j];
            k++;
            j++;
        }else{
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }

    while(i<size1){
        arr3[k] = arr1[i];
        k++;
        i++; 
    }

    while(j<size2){
        arr3[k] = arr2[j];
        k++;
        j++; 
    }

    printArray(arr3,size3);
}

int main(){
    int arr1[4] = {2,5,6,7};
    int arr2[5] = {1,3,3,4,8};
    int arr3[9] = {0};

    mergeTwoSortedArrays(arr1,4,arr2,5,arr3,9);

    return 0;
}