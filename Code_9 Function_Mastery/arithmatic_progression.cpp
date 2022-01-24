#include<iostream>
using namespace std;

int Ap_calculator(int num){
    return 3 * num + 7;
}

int main(){
    int num;
    cout << "Enter the number for the Arithmatic Progression calculations : " << ends;
    cin >> num;

    cout << "The AP of num entered for the expression 3 * num + 7 is : " << Ap_calculator(num) << endl;

    return 0;
}