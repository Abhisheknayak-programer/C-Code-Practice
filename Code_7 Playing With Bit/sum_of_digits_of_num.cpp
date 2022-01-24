#include<iostream>
using namespace std;

int main(){
    int num,sum = 0;
    cout << "Enter the num : " << ends;
    cin >> num;

    while(num){
        int rem = num % 10;
        sum = sum + rem;
        num = num /10;
    }

    cout << "Sum of digits of Number is : " << sum << endl;

    return 0;
}