// 5 
// 4 3
// 3 2 1 

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
            value--;
        }
        cout << endl;
        row++;
    }

}