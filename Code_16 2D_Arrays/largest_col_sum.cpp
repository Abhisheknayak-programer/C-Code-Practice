#include<iostream>
using namespace std;

int LargestColWiseSum(int arr[3][3]){
    int maximum = arr[0][0];
    for(int col=0;col<3;col++){
        int sum = 0;
        for(int row=0;row<3;row++){
            sum = sum+arr[row][col];   
        }
        if(sum > maximum){
            maximum = sum;
        }
    }

    return maximum;
}


int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // 18
    cout << LargestColWiseSum(arr) << endl;

    return 0;
}