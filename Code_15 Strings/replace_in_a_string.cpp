#include<iostream>
#include<string>
using namespace std;

string replaceString(string s){
    string temp = "";
    int size = s.size();

    for(int i =0;i<size;i++){
        if(s[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(s[i]);
        }
    }

    return temp;
}

int main(){
    string str = "Abhishek is a Great MERN Stack Developer";
    
    cout << "Before the string replace : " << str << endl;
    str = replaceString(str);
    cout << "Before the string replace : " << str << endl;

    return 0;
}