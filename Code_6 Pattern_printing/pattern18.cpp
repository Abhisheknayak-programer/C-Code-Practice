// A
// B B
// C C C
// D D D D

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << endl;

    while(row <= num){
        int col = 1;
        while(col <= row){
            char ch = 'A' + row - 1;
            cout << ch <<ends;
            col++;
        }
        cout << endl;
        row++;
    }

}