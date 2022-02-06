#include<iostream>
using namespace std;

void PrintVector(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
    cout << endl;
}

bool CheckSortedAndRotated(int arr[],int size){
    int count = 0;
    for(int i=1;i<size;i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }

    if(arr[size-1] > arr[0]){
        count++;
    }

    return count <= 1;
}

int main(){
    int arr[5] = {3,4,5,1,2};
    bool value = CheckSortedAndRotated(arr,5);

    if(value){
        cout << "Yes Abhishek Sir it is sorted and rotated!";
    }else{
        cout << "Sorry Abhishek Sir it is not sorted and rotated!";
    }

    return 0;
}