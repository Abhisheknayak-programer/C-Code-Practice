#include<iostream>
#include<string>
using namespace std;

void ReverseWordsInString(string s){
    string result = "";
    int size = s.size();
    int i =0;

    while(i < size){
        // Finding the valid Char 
        while(i < size && s[i] == ' '){
            i++;
        }
        if(i >= size) break;
        
        int j = i+1;
        // Finding the space
        while(j<size && s[j] != ' '){
            j++;
        }

        // Inserting the new word inside the result string
        string word = s.substr(i,j-i);
        result = word + " " + result;

        // Changing the position of the i to the last valid char + 1
        i=j+1;
    }

    cout << result;
}


int main(){
    string s = "the sky is blue in color";
    ReverseWordsInString(s);

    return 0;
}