#include<iostream>
using namespace std;

bool odd_Even_checker (int a){
    if(a % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    cout << "Enter the number to check wheather a number is odd or not : " << ends;
    cin >> num;

    bool checker = odd_Even_checker(num);
    if(checker){
        cout << "The Number is a even Number" << endl;
    }else{
        cout << "The Number is a odd Number" << endl;
    }
    return 0;
}