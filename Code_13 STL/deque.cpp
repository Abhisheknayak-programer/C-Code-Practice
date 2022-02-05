#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque <int> dq;
    dq.push_back(1);
    dq.push_back(3);
    dq.push_back(2);
    dq.push_front(123);

    for(int i : dq){
        cout << i << ends;
    }cout << endl;
    
    cout << "The size of the dequeu is : " << dq.size() << endl;

    cout << "The front index element of the deque is : "<< dq.front() << endl;

    cout << "Checking wheather the deque is empty or not : " << dq.empty() << endl;

    dq.pop_front();
    cout << "After the pop operation on the front the front index element becomes : " << dq.front() << endl;
    
    cout << "Before the pop operation the back index element is : " << dq.back() << endl;
    dq.pop_back();
    cout << "After the pop operation on the back the back index element becomes : " << dq.back() << endl;

    dq.erase(dq.begin(),dq.end());
    cout << "Checking wheather the deque is empty or not : " << dq.empty() << endl;
    return 0;
}