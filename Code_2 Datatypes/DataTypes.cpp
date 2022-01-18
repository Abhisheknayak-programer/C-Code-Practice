#include<iostream>
using namespace std;

int main(){
    int a = 9;
    char ch = 'A';
    float f = 2.3;
    double d = 23.3;

    int size_Char = sizeof(ch);
    int size_Double = sizeof(d);
    int size_Int = sizeof(a);
    int size_Float = sizeof(f);

    cout << "Size of Integer is " << size_Int << " Bytes And the value stored is " << a << endl <<  "Size of Char is " << size_Char << " Bytes And the value stored is " << ch << endl <<  "Size of Double is " << size_Double << " Bytes And the value stored is " << d << endl <<  "Size of Float is " << size_Float << " Bytes And the value stored is " << f << endl;
}