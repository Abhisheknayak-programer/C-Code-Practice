#include<iostream>
using namespace std;

int LengthFinder(char arr[]){
    int len = 0;

    for(int i=0;arr[i] != '\0';i++){
        len++;
    }

    return len;
}


int main(){
    char arr[20];
    cout << "Enter your firstname to check the length of the name : " << ends;
    cin >> arr;

    cout << "The length of your firstname " << arr <<" is : " << LengthFinder(arr);
    return 0;
}