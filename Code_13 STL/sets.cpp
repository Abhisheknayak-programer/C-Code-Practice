#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> s;
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(3);

    for(int i : s){
        cout << i << ends;
    }cout << endl;

    cout << "The size of the list is : " << s.size() << endl;

    cout << "Checking about whether 2 is present or not : " << s.count(2) << endl;
    s.erase(s.begin(),s.end());
    cout << "Checking about whether 2 is present or not : " << s.count(2) << endl;

    return 0;
}