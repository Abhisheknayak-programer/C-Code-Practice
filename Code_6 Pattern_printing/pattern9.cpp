// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;

int main(){
    int num,row = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;

    while(row <= num){
        int col = 1;
        while(col <= row){
            cout << row <<ends;
            col++;
        }
        row++;
        cout << endl;
    }

}