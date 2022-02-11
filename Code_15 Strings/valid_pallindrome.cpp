#include<iostream>
#include<string>
using namespace std;

// USED TO CHECK WHETHER A CHAR IS A VALID CHAR OR NOT
    bool ValidChar(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return true;
        }
        return false;
    }
    
// CONVERTING THE STRING TO LOWERCASE
    char toLowerCase(char ch){
        if((ch >= 'a' && ch <= 'z') || ((ch >= '0' && ch <= '9'))){
            return ch;
        }    
        else{
            int newCh = ch - 'A' + 'a';
            return newCh;
        }
    }
    
    
// Pallindrome Checker
    bool CheckPallindrome(string temp){
        int start = 0;
        int len = temp.length();
        int end = len - 1;
        
        while(start <= end){
           if(temp[start++] != temp[end--]){
               return false;
           }
        } 
        return true;
    }
    
// USED TO CHECK WHETHER VALID PALLINDROME OR NOT   
    bool isPalindrome(string s) {
        string temp;
        int size = s.length();
               
        for(int i=0;i<size;i++){
            if(ValidChar(s[i])){
                temp.push_back(s[i]);
            }
        }
        
        for(int i=0;i<temp.length();i++){
            temp[i] = toLowerCase(temp[i]);
        }
        
        return CheckPallindrome(temp);
    }

int main(){
    string s = "Abhishek Nayak is a great MERN stackdeveloper";
    string news = "MAdam";
    cout << isPalindrome(s) << endl;
    cout << isPalindrome(news) << endl;

    return 0;
}