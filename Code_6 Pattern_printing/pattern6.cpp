// 1 2 3 
// 4 5 6 
// 7 8 9

#include<iostream>
using namespace std;

int main(){
    int num, row = 1,count = 1;
    cout << "Enter the number for the rows and column of the pattern : " << ends;
    cin>>num;
    
    while(row <= num){
        int col = 1;
        while(col <= num){
            cout << count <<ends;
            count++;
            col++;
        }
        row++;
        cout << endl;
    }

}