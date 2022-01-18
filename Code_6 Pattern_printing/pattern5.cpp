// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int num, row = 1;
    cout << "Enter the number for the rows and column of the pattern : " << ends;
    cin>>num;
    
    while (row <= num){
        int col = 1;
        while(col <= num){
            cout << num - col + 1;
            col++;
        }
        cout << endl;
        row++;
    }

}