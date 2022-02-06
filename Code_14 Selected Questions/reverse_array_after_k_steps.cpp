#include<iostream>
using namespace std;

void PrintVector(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
    cout << endl;
}

void ReverseVector(int arr[],int size,int k){
    int  start = k+1;
    int end = size - 1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;end--;
    }
}   

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int steps;
    cout << "Enter the number of steps : " << ends;
    cin >> steps;

    cout << "Before the Reverse : " << endl;
    PrintVector(arr,6);

    ReverseVector(arr,6,steps);

    cout << "After the Reverse : " << endl;
    PrintVector(arr,6);


    return 0;
}