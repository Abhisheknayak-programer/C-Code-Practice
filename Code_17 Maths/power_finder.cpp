#include<iostream>
using namespace std;

int PowerFinder(int a,int b){
    int result = 1;
    for(int i=1;i<=b;i++){
        result = a * result;
    }

    return result;
}

int main(){
    int a = 2,b =3;
    cout << PowerFinder(a,b) << endl;

    return 0;
}