#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
    cout << endl;
}

void Rotate_elements_k_steps_forward(int arr[],int size,int steps){
    int temp[size];

    for(int i=0;i<size;i++){
        temp[(i+steps) % size] = arr[i];
    }
    arr = temp;

    printArray(arr,4);
}

int main(){
    int arr[4] = {1,7,9,11};
    int steps;
    cout << "Enter the steps after which you need a rotation : " << ends;
    cin >> steps;

    Rotate_elements_k_steps_forward(arr,4,steps);

    return 0;
}