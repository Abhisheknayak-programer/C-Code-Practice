#include<iostream>
#include<map>
using namespace std;

int main(){
    map <int,string> m;
    m[1] = "Abhishek";
    m[2] = "Nayak";

    for(int i=0;i<m.size();i++){
        cout << m[i] << endl;
    }

    return 0;
}