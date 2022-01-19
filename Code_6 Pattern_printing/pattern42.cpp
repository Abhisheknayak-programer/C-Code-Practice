// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<iostream>
using namespace std;

int main(){
    int num,row = 1;
    cout << "Enter the Maximum Number upto which you want to see the pattern ";
    cin>>num;

    while(row <= num){
        int col = num - row + 1;
        int innerNum = 1;
        while(col){
            cout << innerNum;
            col--;
            innerNum++;
        }
        
        int stars = (row - 1) * 2;
        while(stars){
            cout << "*";
            stars--;
        }

        int side_col = num - row + 1;
        while(side_col){
            cout << side_col;
            side_col--;
        }

        row++;
        cout << endl;
    }
}