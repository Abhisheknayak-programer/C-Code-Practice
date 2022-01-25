#include<iostream>
using namespace std;

int min_finder(int arr[],int size){
    int min = arr[0];  
    for(int i = 0; i<size ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int max_finder(int arr[],int size){
    int max = arr[0];  
    for(int i = 0; i<size ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void MIN_MAX_FINDER(int arr[],int size){
    int min = min_finder(arr,size);
    int max = max_finder(arr,size);
    cout << "MIN value from the array is " << min << endl << "MAX value from the array is " << max << endl;
}

int main(){
    int arr[] = {3,4,5,52,24,1};
    MIN_MAX_FINDER(arr,sizeof(arr)/sizeof(int));

    return 0;
}