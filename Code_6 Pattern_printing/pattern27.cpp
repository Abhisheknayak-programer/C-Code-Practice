//       1
//     2 2
//   3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << endl;

    while(row <= num){
       int space = num - row;
        while(space){
            cout << " ";
            space--;
        }

       int col = 1;
        while (col <= row){
            cout << row;
            col++;
        }

        row++;
        cout << endl;
    }

}
