// * * * *
// * * * *
// * * * *
// * * * *

#include<iostream>
using namespace std;

int main(){
    int num, row = 1;
    cout << "Enter the number for the rows and column of the pattern : " << ends;
    cin>>num;
    
    while (row <= num){
        int col = 1;
        while(col <= num){
            cout << " * ";
            col++;
        }
        cout << endl;
        row++;
    }

}