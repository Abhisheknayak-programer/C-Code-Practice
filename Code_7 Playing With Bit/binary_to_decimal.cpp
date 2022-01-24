#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int binary = 1111 ,i = 0,ans = 0;

    while(binary){
        int digit = binary % 10;
        if(digit == 1){
            ans = ans + pow(2,i);
        }
        i++;
        binary = binary / 10;
    }

    cout << "Binary to decimal : " << ans << endl;

    return 0;
}