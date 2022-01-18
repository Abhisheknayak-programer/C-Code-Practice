#include<iostream>
using namespace std;

int main(){
    int num,fact = 1;
    cout << "Enter the Number To check" << ends;
    cin>>num;   
    int temp = num;

    while(temp){
        fact = fact * temp;
        temp = temp - 1;
    }

    cout << "The factorial of the Number " << num << " is " << fact <<endl; 

}