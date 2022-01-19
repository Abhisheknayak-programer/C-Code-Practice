// * * * * *
//   * * *
//     *

#include<iostream>
using namespace std;

int main(){
    int num,row = 1;
    cout << "Enter the Maximum Number upto which you want to see the pattern ";
    cin>>num;


    while(row <= num){
        int secondSpace = row - 1;
        while(secondSpace){
            cout << " ";
            secondSpace--;
        }

        int col = num - row + 1;
        while(col){
            cout << "*";
            col--;
        }
        
        int SideStar = num - row;
        while(SideStar){
            cout << "*";
            SideStar--;
        }

        cout << endl;
        row++;
    }
}