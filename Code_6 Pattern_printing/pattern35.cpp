//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

#include<iostream>
using namespace std;

int main(){
    int num,row = 1;
    cout << "Enter the Maximum Number upto which you want to see the pattern ";
    cin>>num;

    while(row <= num){
        int space = num - row;
        while(space){
            cout << " ";
            space--;
        }

        int col = 1;
        while(col <= row){
            cout << "*";
            col++;
        }

        int start = row - 1;
        while(start){
            cout << "*";
            start--;
        }

        cout << endl;
        row++;
    }


    int secondRow = 1;
    while(secondRow <= num){
        int secondSpace = secondRow - 1;
        while(secondSpace){
            cout << " ";
            secondSpace--;
        }

        int secondCol = num - secondRow + 1;
        while(secondCol){
            cout << "*";
            secondCol--;
        }
        
        int SideStar = num - secondRow;
        while(SideStar){
            cout << "*";
            SideStar--;
        }


        cout << endl;
        secondRow++;
    }
}