// 1 2 3 
// 4 5 6 
// 7 8 9

#include<iostream>
using namespace std;

int main(){
    int row,col,count = 1;
    cout << "Enter the row" << endl;
    cin >> row;

    cout << "Enter the column" << endl;
    cin >> col;
    
    for(int i=1;i<=row;i++){
        for(int j=col;j>0; j--){
            cout << count++;
        }
        cout << endl;
    }

    return 0;
}
