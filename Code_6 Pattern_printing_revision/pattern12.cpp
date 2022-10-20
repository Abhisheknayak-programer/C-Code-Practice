// A A A
// B B B
// C C C

#include<iostream>
using namespace std;

int main(){
    int row;
    char c = 'A';

    cout << "Enter the row" << endl;
    cin >> row;

    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout << c << " ";
        }
        c++;
        cout << endl;
    }

    return 0;
}