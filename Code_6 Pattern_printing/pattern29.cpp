// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
using namespace std;
 
int main(){
    int num,row = 1;
    cout << "Enter the Number Upto which you want to see the pattern : " << ends;
    cin>>num;
    cout << endl;

    while(row <= num){
       int range = num - row + 1;
       int col = 1;
        while (col <= range){
            cout << col << ends;
            col++;
        }

        row++;
        cout << endl;
    }

}
