// * * * *
//   * * *
//     * *
//       *

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << endl;

    while(row <= num){
       int space = row - 1;
        while(space){
            cout << "  ";
            space--;
        }

       int col = num - row + 1;
        while (col){
            cout << " *";
            col--;
        }

        row++;
        cout << endl;
    }

}