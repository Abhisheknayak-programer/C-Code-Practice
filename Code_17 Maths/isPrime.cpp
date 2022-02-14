#include<iostream>
using namespace std;

bool is_prime(int num){
    if(num == 0 || num == 1) return 0;
    for(int i=2;i<num;i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num = 7;
    cout << is_prime(num);

    return 0;
}