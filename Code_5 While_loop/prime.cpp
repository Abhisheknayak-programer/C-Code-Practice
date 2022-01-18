#include<iostream>
using namespace std;

int main(){
    int num, start = 2,count=0;
    cout << "Enter the Number To check" << ends;
    cin>>num;   

    while(start < num){
        if(num % start == 0){
            count++;
        }
        start += 1;
    }

       if(count >= 1){
            cout << start << " is Not a prime Number" << endl;
        }else{
             cout << start << " is a Prime Number" << endl;
        }

}