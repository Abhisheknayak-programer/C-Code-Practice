#include<iostream>
using namespace std;

int getlength(char arr[]){
    int len = 0;

    for(int i =0;arr[i] != '\0';i++){
        len++;
    }

    return len;
}

// CHECKS BUT NOT CASE SENSITIVE
bool CheckPallindrome(char arr[],int len){
    int start = 0;
    int end = len - 1;

    while(start <= end){
        if(arr[start] != arr[end]){
            return false;
        }
        start++;end--;
    }

    return true;
}

// CONVERTING THE STRING TO LOWERCASE
char toLowerCase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        int newCh = ch - 'A' + 'a';
        return newCh;
    }    
    else{
        return ch;
    }
}

// CONVERTING THE STRING TO UPPERCASE
char toUpperCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        int newCh = ch - 'a' + 'A';
        return newCh;
    }    
    else{
        return ch;
    }
}

// CHECKS FOR CASE SENSITIVE ALSO 
bool CheckPallindrome_Most_Optimal(char arr[],int len){
    int start = 0,end = len-1;
    
    while(start < end){
        if(toLowerCase(arr[start]) != toLowerCase(arr[end])){
            return false;
        }
        start++;
        end--;
    }

    return true;
}


int main(){
    char arr[20];
    cout << "Enter the string to check whether it is a pallindrome or not : " << ends;
    cin >> arr;

    // CHECKING NOT CASE SENSITIVE 
    cout << "CHECKING NOT CASE SENSITIVE" << endl;
    if(CheckPallindrome(arr,getlength(arr))){
        cout << "Pallindrome" << endl;
    }
    else{
        cout << "Not Pallindrome" << endl;
    }

    cout << "CHECKING NOT CASE SENSITIVE" << endl;
    if(CheckPallindrome_Most_Optimal(arr,getlength(arr))){
        cout << "Pallindrome" << endl;
    }
    else{
        cout << "Not Pallindrome" << endl;
    }


    return 0;
}