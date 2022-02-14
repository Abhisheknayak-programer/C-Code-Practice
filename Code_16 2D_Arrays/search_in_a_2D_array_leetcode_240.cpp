#include<iostream>
#include<vector>
using namespace std;

bool SearchIn_2D_Matrix(vector<vector<int>> &matrix,int target){
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    int rowIndex = 0;
    int colIndex = colSize-1;

    while(rowIndex < rowSize && colIndex >= 0){
        int element = matrix[rowIndex][colIndex];
        if(element == target){
            return 1;
        }
        if(element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }

    return 0;
}


int main(){
    vector<vector<int>> arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout << SearchIn_2D_Matrix(arr,12);

    return 0;
}