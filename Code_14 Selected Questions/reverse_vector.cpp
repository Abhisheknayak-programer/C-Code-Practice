#include<iostream>
#include<vector>
using namespace std;

void PrintVector(vector <int> &v){
    int size = v.size();
    for(int i=0;i<size;i++){
        cout << v[i] << ends;
    }
    cout << endl;
}

void ReverseVector(vector <int> &v){
    int  start = 0;
    int end = v.size() - 1;
    while(start < end){
        swap(v[start++],v[end--]);
    }
}   


int main(){
    vector <int> v;
    
    v.push_back(12);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);
    v.push_back(89);

    cout << "Before the Reverse : " << endl;
    PrintVector(v);

    ReverseVector(v);

    cout << "After the Reverse : " << endl;
    PrintVector(v);

    return 0;
}