// A B C
// D E F
// G H I

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1,value = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << endl;

    while(row <= num){
        int col = 1;
        while(col <= num){
            char ch = 'A' + value - 1;
            cout << ch <<ends;
            col++;
            value++;
        }
        cout << endl;
        row++;
    }

}