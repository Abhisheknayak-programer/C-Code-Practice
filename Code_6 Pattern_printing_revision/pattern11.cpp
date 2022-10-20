// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the row" << endl;
    cin >> row;

    for(int i=1;i<=row;i++){
        int val = i;
        for(int j=1;j<=i;j++){
            cout << val-- << " ";
        }
        cout << endl;
    }

    return 0;
}