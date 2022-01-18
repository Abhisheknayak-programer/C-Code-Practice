// 4 
// 3 4
// 2 3 4
// 1 2 3 4 

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << endl;

    while(row <= num){
        int col = 1;
        int value = num - row + 1;
        while(col <= row){
            cout << value <<ends;
            col++;
            value++;
        }
        cout << endl;
        row++;
    }

}