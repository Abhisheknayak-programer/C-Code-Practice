// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

#include<iostream>
using namespace std;

int main(){
    int num,row = 1;
    cout << "Enter the Maximum Number upto which you want to see the pattern ";
    cin>>num;

    while(row <= num){
        int col = num - row + 1;
        while(col){
            cout << " *"; 
            col--;
        }

        int space = (row - 1) * 2;
        while(space){
            cout << "  ";
            space--;
        }


        int start = num - row + 1;
        while(start){
            cout << " *";
            start--;
        }
        
        row++;
        cout << endl;
    }
}