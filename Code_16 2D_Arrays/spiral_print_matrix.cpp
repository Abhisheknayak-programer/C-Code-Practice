#include<iostream>
#include<vector>
using namespace std;

vector <int> spiralPrint(vector<vector<int>> &arr){
    vector <int> ans;
    int rowSize = arr.size();      // Gives the total number of rows
    int colSize = arr[0].size();  // Gives the total number of 

    int count = 0;
    int totalElements = rowSize * colSize;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rowSize - 1;
    int endingCol = colSize - 1;

    while(count < totalElements){

        // Printing the starting Row
        for(int index=startingCol;index<=endingCol && count < totalElements;index++){
            cout << arr[startingRow][index] << ends;
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        // Printing the Ending col
        for(int index=startingRow;index<=endingRow && count < totalElements;index++){
            cout << arr[index][endingCol] << ends;
            ans.push_back(arr[index][endingCol]);
            count++;
        }
        endingCol--;


        // Printing the Ending Row
         for(int index=endingCol;index>=startingCol && count < totalElements;index--){
            cout << arr[endingRow][index] << ends;
            ans.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;



        // Printing the starting col
         for(int index=endingRow;index>=startingRow && count < totalElements;index--){
            cout << arr[index][startingCol] << ends;
            ans.push_back(arr[index][startingCol]);
            count++;
        }
        startingCol++;
        
    }

    return ans;
}

int main(){  
    vector <vector <int>> arr = {{1,2,3,5},{52,2,5,2},{4,67,7,2}};
    spiralPrint(arr);


    return 0;
}