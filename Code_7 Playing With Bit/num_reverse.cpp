#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,i=1,ans = 0;
    cout << "Enter the number : " << ends;
    cin>>num;
    
    while(num){
        int rem = num % 10;
        ans = ans * 10 + rem;
        num = num / 10;
        i++;
    }

    cout << "The Reverse Of The Number Is : " << ans <<endl;

    return 0;
}