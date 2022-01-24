#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,count = 0;
    cout << "Enter the number : " << ends;
    cin>>num;

    while(num != 0){
        int bit = num & 1;

        if(bit == 1){
            count++;
        }

        num = num >> 1;
    }

    cout << "The number of ones in the binary format of the number is : " << count <<endl;

    return 0;
}