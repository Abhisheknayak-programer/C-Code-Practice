#include<iostream>
#include<string>
using namespace std;

string RemoveAdjacentDuplicates(string s){
    string ans = "";
    int size = s.length();

    // First char is inserted to the answer so that we can compare with that easily with the remaning characters
    ans.push_back(s[0]);

    // All the characters starting from Index 1 is Being checked so that no more duplicates will remain
    for(int i=1;i<size;i++){
        if(s[i] == ans.back()){
            ans.pop_back();
        }else{
            ans.push_back(s[i]);
        }
    }

    return ans;
}


int main(){
    string s = "abbaca";
    cout << RemoveAdjacentDuplicates(s) << endl;

    return 0;
}