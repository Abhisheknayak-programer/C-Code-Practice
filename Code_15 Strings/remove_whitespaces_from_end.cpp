#include<iostream>
#include<string>
using namespace std;

void RemoveWhiteSpacesFromEnd(string str){
    string whitespaces = " \t\n";
    int FoundMatchedIndex = str.find_last_not_of(whitespaces);
    
    if(FoundMatchedIndex != string::npos){
        str.erase(FoundMatchedIndex+1);
        FoundMatchedIndex = str.find_last_not_of(whitespaces,FoundMatchedIndex+1);
    }else{
        str.clear();
    }
    
    cout << str << endl;
}

int main(){
    string str = "I am Abhishek Nayak a MERN Stack Developer \n \t  \n";
    RemoveWhiteSpacesFromEnd(str);

    return 0;
}