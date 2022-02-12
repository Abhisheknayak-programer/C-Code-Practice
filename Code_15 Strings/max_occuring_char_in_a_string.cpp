#include<iostream>
#include<string>
using namespace std;

char MaxOccuringChar(string s){
    int arr[26] = {0};
    int size = s.length();

    for(int i=0;i<size;i++){
        int Val = 0;
        char ch = s[i]; 

        if(ch >='a' && ch <= 'z'){
            Val = ch - 'a';
        }
        else{
            Val = ch - 'A';
        }
        arr[Val]++; 
    }

    int  maximum = arr[0];
    int MaximumIndex = 0;
    for(int i=0;i<26;i++){
        if(arr[i] > maximum){
            maximum = arr[i];
            MaximumIndex = i;
        }
    }

    char MostOccuringChar = 'a' + MaximumIndex;
    return MostOccuringChar;
}

int main(){
    string s;
    cout << "Enter the string : " << ends;
    cin >> s;

    cout << "The most occuring character is : " << MaxOccuringChar(s) << endl;

    return 0;
}
