// * * * *
//  * * *
//   * *
//    *
//   * *
//  * * *
// * * * *

#include<iostream>
using namespace std;

int main(){
    int num,row = 1;
    cout << "Enter the Maximum Number upto which you want to see the pattern ";
    cin>>num;

    while(row <= num){
        int space = row;
        while(space){
            cout << " ";
            space--;
        }

        int stars = num - row;
        stars++;
        while(stars){
            cout << " * ";
            stars--;
        }

        row++;
        cout << endl;
    }

    int secondRow = 2;
    while(secondRow <= num ){
        int space = num - secondRow;
        space++;
        while(space){
            cout << " ";
            space--;
        }

        int stars = secondRow;
        while(stars){
            cout << " * ";
            stars--;
        }

        secondRow++;
        cout << endl;
    }
    
}