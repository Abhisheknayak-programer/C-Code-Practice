#include<iostream>
#include<vector>
using namespace std;

vector <int> wavePrint(vector <vector <int>> &arr,int rowSize,int colSize){
    vector <int> ans;

    for(int col=0;col<colSize;col++){
        // FOR ODD INDEXES [BOTTOM TO TOP PRINTING]
        if(col&1){
            for(int row = rowSize-1;row>=0;row--){
                cout << arr[row][col] << ends;
                ans.push_back(arr[row][col]);
            }
        }
        // FOR EVEN & 0 INDEXES [TOP TO BOTTOM PRINTING]
        else{
            for(int row = 0;row<rowSize;row++){
                cout << arr[row][col] << ends;
                ans.push_back(arr[row][col]);
            }
        }

    }

    return ans;
}

int main(){
    vector <vector <int>> arr = {{1,2,3,5},{52,2,5,2},{4,67,7,2}};
    wavePrint(arr,3,4);

    return 0;
}