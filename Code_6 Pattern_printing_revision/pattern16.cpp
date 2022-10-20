// A
// B B
// C C C
// D D D D

#include<iostream>
using namespace std;

int main (){
    int row;

    cout << "Enter the row" << endl;
    cin >> row;

    for(int i=0;i<row;i++){
        char c = 'A' + i;
        for(int j=0;j<=i;j++){
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}