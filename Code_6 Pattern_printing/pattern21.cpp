// D 
// C D
// B C D
// A B C D

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << endl;

    while(row <= num){
        int col = 1;
        char ch = 'A' + num - row ;
        while(col <= row){
            cout << ch <<ends;
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }

}