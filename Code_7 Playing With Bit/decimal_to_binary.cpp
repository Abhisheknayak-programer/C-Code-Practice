#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int Num,i = 0,ans = 0;
    cout << "Enter the Number : " << ends;
    cin >> Num;
    
    while(Num != 0){
        int bit = Num & 1;
        ans += bit * pow(10,i);   
        i++;
        Num = Num>>1;
    }

    cout << "Decimal to Binary : " << ans << endl;

    return 0;
}