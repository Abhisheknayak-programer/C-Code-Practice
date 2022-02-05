#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s;
    s.push(23);
    s.push(4);
    s.push(67);

    cout << "The size of the stack is : " << s.size() << endl;

    cout << "The top most index element of the stack is : "<< s.top() << endl;

    cout << "Checking wheather the stack is empty or not : " << s.empty() << endl;

    s.pop();
    cout << "After the pop operation the top index element becomes : " << s.top() << endl;

    return 0;
}