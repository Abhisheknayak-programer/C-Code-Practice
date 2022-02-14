#include<iostream>
using namespace std;

bool linearSearch(int arr[][2],int key){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j] == key){
                cout << "Present in Row : " << i+1 << " And Column is : " << j+1 << endl;
                return true;
            }
        }
    }
    return false;
}


int main(){
    int arr[2][2] = {{2,1},{9,3}};

    if(linearSearch(arr,9)){
        cout << "Present";
    }else{
        cout << "Not Present";
    }

    return 0;
}