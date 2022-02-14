#include<iostream>
using namespace std;

void colWiseSum(int arr[3][3]){
    for(int col=0;col<3;col++){
        int sum = 0;
        for(int row=0;row<3;row++){
            sum = sum+arr[row][col];   
        }
        cout << sum << ends;
    }
}


int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // 12 15 18
    colWiseSum(arr);

    return 0;
}