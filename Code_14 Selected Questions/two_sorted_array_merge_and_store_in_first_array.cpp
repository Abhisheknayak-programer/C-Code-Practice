#include<iostream>
#include<vector>
using namespace std;

void printVector(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cout << a[i] << ends;
    }
    cout << endl;
}

void MergeTwoVectorAndStoreOnFirstVector(vector <int> arr1,vector <int> arr2){
    int LastIndex_arr1 = arr1.size() - 1;
    int LastIndex_arr2 = arr2.size() - 1;
    int total_space = arr1.size() + arr2.size() - 1;

    for(int i=total_space; i>=0 && LastIndex_arr2>=0 ; i--){
        if(LastIndex_arr1>=0 && arr1[LastIndex_arr1] > arr2[LastIndex_arr2]){
            arr1[i] = arr1[LastIndex_arr1];
            LastIndex_arr1--;
        }
        else{
            arr1[i] = arr2[LastIndex_arr2];
            LastIndex_arr2--;
        }
    }

    // Print the vector 
    printVector(arr1);
}

int main(){
    vector <int> arr1;
    vector <int> arr2;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr2.push_back(1);
    arr2.push_back(5);
    arr2.push_back(3);

    MergeTwoVectorAndStoreOnFirstVector(arr1,arr2);

    return 0;
}