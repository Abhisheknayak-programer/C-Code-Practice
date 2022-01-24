#include<iostream>
using namespace std;

int set_bits_finder(int num){
    int bits = 0;
    while(num){
        if(num & 1){
            bits++;
        }
        num = num >> 1;
    }
    return bits;
}

int main(){ 
    int num;
    cout << "Enter the number to check the set bits : " << ends;
    cin>>num;

    cout << "The total number of set bits = " << set_bits_finder(num) << endl;

    return 0;
}