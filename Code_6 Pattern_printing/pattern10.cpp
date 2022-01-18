// 1 
// 2 3
// 4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;

int main(){
    int num,row = 1,count = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;

    while(row <= num){
        int col = 1;
        while(col <= row){
            cout << count <<ends;
            col++;
            count++;
        }
        row++;
        cout << endl;
    }

}