#include<iostream>
using namespace std;

int LargestrowWiseSum(int arr[3][3]){
    int maximum = arr[0][0];
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum = sum+arr[i][j];   
        }
        if(sum > maximum){
            maximum = sum;
        }
    }

    return maximum;
}


int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // 24
    cout << LargestrowWiseSum(arr) << endl;

    return 0;
}