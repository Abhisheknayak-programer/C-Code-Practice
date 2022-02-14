#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>> &arr,int key){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    int start = 0,end = ((rowSize * rowSize) - 1);
    int mid = start + ((end - start)/2);

    while(start <= end){
        int element = arr[mid/colSize][mid%colSize];
        if(element == key){
            return 1;
        }else if(element < key){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start + ((end - start)/2);
    }

    return 0;
}


int main(){
    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    if(binarySearch(arr,7)){
        cout << "found" << endl;
    }else{
        cout << "Not found" << endl;
    }


    return 0;
}