#include<iostream>
#include<string>
using namespace std;

string RemoveAllOccureces(string s,string removeStr){
    int size = s.length();

    while(size != 0 && s.find(removeStr) < size){
        s.erase(s.find(removeStr),removeStr.length());
    }

    return s;
}

int main(){
    string str = "daabcbaabcbc";
    string removestr = "abc";
    cout << "The String Left : " << RemoveAllOccureces(str,removestr);

    return 0;
}