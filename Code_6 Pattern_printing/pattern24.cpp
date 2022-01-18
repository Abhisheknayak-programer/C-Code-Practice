// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1;
    char symbol;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << "Enter the Symbol : " << ends;
    cin>>symbol;
    cout << endl;

    while(row <= num){
        int col = num - row + 1;
        while(col){
            cout << symbol << ends;
            col--;
        }
        row++;
        cout << endl;
    }

}