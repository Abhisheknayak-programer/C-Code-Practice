// A A A
// B B B
// C C C

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << endl;

    while(row <= num){
        int col = 1;
        while(col <= num){
            char ch = 'A' + row - 1;
            cout << ch <<ends;
            col++;
        }
        cout << endl;
        row++;
    }

}