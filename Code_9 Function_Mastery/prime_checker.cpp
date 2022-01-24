#include<iostream>
using namespace std;

void isPrime_checker(int num){
    int count = 0;
    for(int i = 2; i < num ; i++){
        if(num % i == 0){
            count++;
            break;
        }
    }

    if(count){
        printf("The Number is not a Prime Number");
    }else{
        cout << "The Number is a Prime Number" << endl;
    }
}

int main(){
    int num;
    cout << "Enter the number to check whether a number is a prime or not : " << ends;
    cin >> num;

    isPrime_checker(num);

    return 0;
}