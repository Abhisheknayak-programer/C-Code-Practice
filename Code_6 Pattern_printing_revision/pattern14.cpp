// A B C
// D E F
// G H I

#include<iostream>
using namespace std;

int main (){
    int row,count = 0;
    char c = 'A';

    cout << "Enter the row" << endl;
    cin >> row;

    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            char ch = c + count++;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}