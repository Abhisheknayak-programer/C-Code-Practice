// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int num,row = 1,count = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;

    while(row <= num){
        int col = 1,value = row;
        while(col <= row){
            cout << value <<ends;
            col++;
            value--;
        }
        row++;
        cout << endl;
    }
}