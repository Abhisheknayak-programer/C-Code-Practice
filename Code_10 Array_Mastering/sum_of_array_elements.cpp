#include<iostream>
using namespace std;

int sum_calculator(int arr[],int size){
    int sum = 0;
    for(int i =0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    
    cout << "Size of the array is : " << size <<endl;
    cout << "Sum of all the array Elements is : " << sum_calculator(arr,size) << endl;

    return 0;
}   