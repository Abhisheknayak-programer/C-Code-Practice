// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include<iostream>
using namespace std;

int main(){
    int num, row = 1;
    cout << "Enter the number for the rows and column of the pattern : " << ends;
    cin>>num;
    
    while (row <= num){
        int col = 1;
        while(col <= num){
            cout << col;
            col++;
        }
        cout << endl;
        row++;
    }

}