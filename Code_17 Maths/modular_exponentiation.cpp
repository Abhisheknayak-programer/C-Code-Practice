#include<iostream>
using namespace std;

int modularExponentiation(int x,int n,int m){
    int result = 1;

    while(n > 0){
        if(n&1){
            result = (result * (x%m))% m; 
        }
        x=((x % m) * (x % m))%m;
        n = n>>1;
    }

    return result;
}

int main(){
    int a = 2,b =3;
    cout << modularExponentiation(a,b,2) << endl;

    return 0;
}