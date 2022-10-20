// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1


#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout << "Enter the row" << endl;
    cin >> row;

    cout << "Enter the column" << endl;
    cin >> col;
    
    for(int i=1;i<=row;i++){
        for(int j=col;j>0; j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
