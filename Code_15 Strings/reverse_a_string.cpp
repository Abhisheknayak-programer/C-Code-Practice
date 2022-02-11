#include<iostream>
using namespace std;

int getlength(char arr[]){
    int len = 0;

    for(int i =0;arr[i] != '\0';i++){
        len++;
    }

    return len;
}

void ReverseString(char arr[],int len){
    int start = 0;
    int end = len - 1;

    while(start < end){
        swap(arr[start],arr[end]);
        start++;end--;
    }
    
    cout << "After the Reversal the String is : " << arr << endl;
}


int main(){
    char arr[20];
    cout << "Enter anything : " << ends;
    cin >> arr;

    ReverseString(arr,getlength(arr));

    return 0;
}