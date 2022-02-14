#include<iostream>
#include<vector>
using namespace std;

vector <int> SPrint(vector <vector <int>> &arr,int rowSize,int colSize){
    vector <int> ans;

    for(int row=0;row<rowSize;row++){
        // FOR ODD INDEXES [Left TO Right PRINTING]
        if(row&1){
            for(int col = 0;col<colSize;col++){
                cout << arr[row][col] << ends;
                ans.push_back(arr[row][col]);
            }
        }
        // FOR EVEN & 0 INDEXES [Right TO Left PRINTING]
        else{
            for(int col = colSize-1;col>=0;col--){
                cout << arr[row][col] << ends;
                ans.push_back(arr[row][col]);
            }
        }
    }

    return ans;
}

int main(){
    vector <vector <int>> arr = {{1,2,3,5},{52,2,5,2},{4,67,7,2}};
    SPrint(arr,3,4);

    return 0;
}