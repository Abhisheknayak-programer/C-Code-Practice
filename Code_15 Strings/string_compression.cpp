#include<iostream>
#include<string>
#include<vector>
using namespace std;

int stringCompression(vector <char> &chars){
    int i=0;
    int ansIndex = 0;
    int size = chars.size();
    
    while(i<size){
        int j=i+1;
        int numsCount = 1; // count of that particular character starts from 1

        // This loop runs until unless we get any other alphabet or traversed upto end
        while(j<size && chars[j] == chars[i]){
            j++;
            numsCount++;
        }

        // storing the old character
        chars[ansIndex] = chars[i];
        ansIndex++; 

        // Storing the count and checking whether it is more than one digit
        int count = numsCount;
        if(count > 1){
            string cnt = to_string(count);
            for(char ch : cnt){
                chars[ansIndex] = ch;
                ansIndex++;
            }
        }

        // So that i will itterate after the j number of steps
        i = j;
    }

   return ansIndex;
}


int main(){
    vector <char> arr;
    arr.push_back('a');
    arr.push_back('a');
    arr.push_back('b');
    arr.push_back('b');
    arr.push_back('c');
    arr.push_back('c');
    arr.push_back('c');
    cout << stringCompression(arr);
    
    return 0;
}