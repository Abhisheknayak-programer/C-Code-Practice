#include<iostream>
#include<list>
using namespace std;

int main(){
    list <int> l;
    l.push_back(1);
    l.push_back(3);
    l.push_back(2);
    l.push_front(123);

    for(int i : l){
        cout << i << ends;
    }cout << endl;
    
    cout << "The size of the list is : " << l.size() << endl;

    cout << "The front index element of the list is : "<< l.front() << endl;

    cout << "Checking wheather the list is empty or not : " << l.empty() << endl;

    l.pop_front();
    cout << "After the pop operation on the front the front index element becomes : " << l.front() << endl;
    
    cout << "Before the pop operation the back index element is : " << l.back() << endl;
    l.pop_back();
    cout << "After the pop operation on the back the back index element becomes : " << l.back() << endl;

    l.erase(l.begin(),l.end());
    cout << "Checking wheather the list is empty or not : " << l.empty() << endl;
    return 0;
}