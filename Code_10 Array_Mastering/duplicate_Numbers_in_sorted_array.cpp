#include<iostream>
using namespace std;

void findDuplicate(int arr[],int size){
    for(int i =0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << ends;
            }
        }
    }
}

int main(){
    int arr[11] = {10,11,12,12,13,14,15,16,17,17,18}; 
    findDuplicate(arr,11);

    return 0;
}