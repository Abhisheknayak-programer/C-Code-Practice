#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i<size ;i++){
        cout << arr[i] << ends;
    }
}

bool linear_Search(int arr[],int size,int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}


int main(){
    int key;
    cout << "Enter the Number to check whether that is present inside the array or not : " << ends;
    cin >> key;
    int arr[5] = {1,2,3,4,5};

    bool value = linear_Search(arr,5,key);
    if(value){
        cout << "Element Present :>" <<endl;
    }else{
        cout << "Element Not Found :<" <<endl;
    }

    return 0;
}