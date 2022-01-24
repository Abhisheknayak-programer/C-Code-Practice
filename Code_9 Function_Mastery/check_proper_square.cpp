#include<iostream>
#include<math.h>
using namespace std;

void check_proper_square__METHOD_1(int num){
    int bits=0;
    while(num){
        if(num & 1){
            bits++;
        }
        num = num >> 1;
    }
    if(bits == 1){
        cout << "The Number is a Proper Square :)" << endl;
    }else{
        cout << "The Number is a Not a Proper Square :(" << endl;
    }
}

void check_proper_square__METHOD_2(int num){
    for(int i = 1;i<=31;i++){
        int power = pow(2,i);
        if(num == power){
            cout << "The Number is a Proper Square :)" << endl;
            return;
        }
    }
    cout << "The Number is a Not a Proper Square :(" << endl;
}

int main(){
    int num;
    cout << "Enter the number to check the proper square : " << ends;
    cin >> num;
    // check_proper_square__METHOD_1(num);
    check_proper_square__METHOD_2(num);

    return 0;
}