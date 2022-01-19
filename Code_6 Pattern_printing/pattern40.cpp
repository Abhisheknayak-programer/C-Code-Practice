// *
// * *
// * * * 
// * * * *
// * * * 
// * * 
// *

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
        row++;
        cout <<endl;
    }

}