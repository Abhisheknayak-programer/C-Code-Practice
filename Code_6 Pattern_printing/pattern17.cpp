// A B C
// B C D
// C D E

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
            char ch = 'A' + col + row - 2;
            cout << ch <<ends;
            col++;
        }
        cout << endl;
        row++;
    }

}