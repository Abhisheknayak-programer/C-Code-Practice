#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
}

void sort_0_1_and_2(int arr[],int size){
    int low = 0;
    int high = size - 1;
    int mid = 0;
 
    // Iterate till all the elements are sorted
    while (mid <= high) {
        switch (arr[mid]) {
 
        // If the element is 0
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }
    printArray(arr,size);
}

int main(){
    int arr[10]={2,0,1,2,0,1,2,1,2,1};
    sort_0_1_and_2(arr,10);

    return 0;
}