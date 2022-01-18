// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << endl;

    while(row <= num){
       int col = num - row + 1;
        while (col){
            cout << col << ends;
            col--;
        }

        row++;
        cout << endl;
    }

}
