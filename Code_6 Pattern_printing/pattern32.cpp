//       *
//     * * *
//   * * * * *
// * * * * * * *

#include<iostream>
using namespace std;

int main(){
    int row = 1, num;
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

        row++;
        cout << endl;
    }
}