// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout << "Enter the row" << endl;
    cin >> row;

    cout << "Enter the column" << endl;
    cin >> col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
