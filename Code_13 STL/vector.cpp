#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> a;
    a.push_back(1);
    a.push_back(-23);
    a.push_back(24);

    cout << "The size of the vector is : " << a.size() << endl;

    cout << "The Capacity of the vector is : " << a.capacity() << endl;
    
    for(int i : a){
        cout << i << ends;
    }cout << endl;

    a.clear();
    cout << "The Vector is [NOTE : 1 == empty || 0 == filled] => " << a.empty() << endl;

}