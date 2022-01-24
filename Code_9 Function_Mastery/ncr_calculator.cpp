#include<iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = 1;i <= num;i++){
        fact = fact * i;
    }
    return fact;
}

// ncr formula = (n! /(r! * (n-r)!))
void ncr_finder(int n,int r){
    int numerator = factorial(n);
    int denomenator = factorial(r) * factorial(n - r);
    int ncr = numerator/denomenator;

    cout << "The NCR of the given numbers is : " << ncr << endl;
}


int main(){
    int n,r;
    cout << "Enter the values of n and r : " << ends;
    cin >> n >> r;

    ncr_finder(n,r);

    return 0;
}