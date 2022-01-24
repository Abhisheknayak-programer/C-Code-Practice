#include<iostream>
using namespace std;

int power_finder (int num1,int num2){
    int pow = 1;
    for(int i=0;i<num2;i++){
        pow = pow * num1;
    }
    return pow;
}

int main (){
    int n1,n2;  
    cout << "Enter the number to find the power of both the numbers : " << ends;
    cin >> n1 >> n2;

    cout << "The power of n1 and n2 is " << power_finder(n1,n2) <<endl;

    return 0;
}