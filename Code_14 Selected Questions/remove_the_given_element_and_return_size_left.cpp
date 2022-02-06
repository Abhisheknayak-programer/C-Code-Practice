#include<iostream>
using namespace std;

void PrintARRAY(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
    cout << endl;
}

int ElementRemover(int arr[],int size,int key){
    int start = 0;
    for(int i=0;i<size;i++){
        if(arr[i] != key){
            arr[start] = arr[i];
            start++;
        }
    }
return start; 
}

int main(){
    int arr[4] = {3,2,2,3};
    cout << "The Remaing Number of elements left is : " << ElementRemover(arr,4,3) <<endl;
    cout << "Now the array looks like : " << endl;
    PrintARRAY(arr,ElementRemover(arr,4,3)-1);

    return 0;
}