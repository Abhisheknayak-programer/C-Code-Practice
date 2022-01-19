// *             *
// * *         * *
// * * *     * * *
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
        int stars = row;
        while(stars){
            cout << " *";
            stars--;
        }

        int space = (num - row) * 2;
        while (space)
        {   
            cout << "  ";
            space--;
        }

        int col = 1;
        while(col <= row){
            cout << " *";
            col++;
        }

        row++;
        cout <<endl;
    }

    row = 1;
    while(row <= num){
        int stars = num - row;
        while(stars){
            cout << " *";
            stars--;
        }

        int space = row * 2;
        while(space){
            cout << "  ";
            space--;
        }

        int col = num - row;
        while(col){
            cout << " *";
            col--;
        }

        row++;
        cout <<endl;
    }

}
