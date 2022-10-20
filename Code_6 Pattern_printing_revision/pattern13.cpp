// A B C D
// A B C D
// A B C D
// A B C D

#include<iostream>
using namespace std;

int main (){
    int row;

    cout << "Enter the row" << endl;
    cin >> row;

    for(int i=0;i<row;i++){
        char c = 'A';
        for(int j=0;j<row;j++){
            cout << c++ << " ";
        }
        cout << endl;
    }

    return 0;
}