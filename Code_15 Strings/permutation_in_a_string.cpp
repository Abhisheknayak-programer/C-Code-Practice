#include<iostream>
#include<string>
using namespace std;

bool checkEqual(int arr1[26],int arr2[26]){
    for(int i=0;i<26;i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1,string s2){
    // Creating the first array of len 26 and inserting the values of the first string in it
    int count1[26] = {0};
    for(int i=0;i<s1.length();i++){
        int CharIndex = s1[i] - 'a';
        count1[CharIndex]++;
    }


    // Traverse string s2 in a window of length s1 and compare
    int i=0;
    int windowSize = s1.length();
    int count2[26] = {0};

    // Running the first window
    while(i < windowSize && i < s2.length()){
        int CharIndex = s2[i] - 'a';
        count2[CharIndex]++;
        i++;
    }    

    // Compare B/w two arrays
    if(checkEqual(count1,count2)){
        return 1;
    }

    // Processing the window Forward
    while(i < s2.length()){
        // Incrementing the value of the next character and incrementing the array
        char Ch = s2[i];
        int IndexFound = Ch - 'a';
        count2[IndexFound]++;

        // As we have added next element so old element is removed from the previously stored array
        char oldChar = s2[i - windowSize];
        IndexFound = oldChar - 'a';
        count2[IndexFound]--;

        i++;

        // Comparision B/W the two arrays
        if(checkEqual(count1,count2)){
            return 1;
        }
    }

    return 0;
}

int main(){
    string s1 = "ab";
    string s2 = "eiddbac";
    string s3 = "daacbd";

    cout << checkInclusion(s1,s2) << endl;
    cout << checkInclusion(s1,s3) << endl;

    return 0;
}