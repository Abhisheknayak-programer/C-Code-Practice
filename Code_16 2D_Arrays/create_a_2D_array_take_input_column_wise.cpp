#include<iostream>
using namespace std;

int main(){
    int arr[2][4];

    // Taking Input Column-wise
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cin >> arr[j][i];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}