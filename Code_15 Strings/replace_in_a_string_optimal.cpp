#include<iostream>
#include<string>
using namespace std;

string replaceString(string s){
    int size = s.length();

    for(int i =0;i<size;i++){
        if(s[i] == ' '){
           s = s.substr(0,i)+"@40"+s.substr(i+1,size);
        }
    }

    return s;
}

int main(){
    string str = "Abhishek is a Great MERN Stack Developer";
    
    cout << "Before the string replace : " << str << endl;
    str = replaceString(str);
    cout << "Before the string replace : " << str << endl;

    return 0;
}