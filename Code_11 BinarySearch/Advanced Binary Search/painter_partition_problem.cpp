#include<iostream>
#include<vector>
using namespace std;

bool isPossibleSolution(vector<int> &boards, int k,int mid){
    int painterCount = 1;
    int boardSum = 0;
    
    for(int i =0;i<boards.size();i++){
		if(boardSum + boards[i] <= mid){
			boardSum = boardSum + boards[i];
        }else{
            painterCount++;
            if(painterCount > k || boards[i] > mid){
				return false;
            }
            boardSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0,sum =0,ans = -1;
    
    for(int i = 0;i<boards.size();i++){
    	sum = sum + boards[i];    
	}
    
    int end = sum;
    int mid = start + ((end - start)/2);
    
    while(start <= end){
		if(isPossibleSolution(boards,k,mid)){
			ans = mid;
			end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + ((end - start)/2);
    }	
    
    return ans;
}


int main(){
    vector <int> arr = {5,5,5,5};
    cout <<  findLargestMinDistance(arr,2);

    return 0;
}