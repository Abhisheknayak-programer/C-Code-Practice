//       A
//     A B A
//   A B C B A
// A B C D C B A

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
        char ch = 'A' + col - 1;
            cout << ch;
            col++;
        }

        int start = row - 1;
        while(start){
            char ch = 'A' + start - 1;
            cout << ch;
            start--;
        }

        cout << endl;
        row++;
    }

}