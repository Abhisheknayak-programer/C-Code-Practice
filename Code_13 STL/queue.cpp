#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue <int> q;
    q.push(12);
    q.push(54);
    q.push(52);

    cout << "The size of the queue is : " << q.size() << endl;

    cout << "The top most index element of the queue is : "<< q.front() << endl;

    cout << "Checking wheather the queue is empty or not : " << q.empty() << endl;

    q.pop();
    cout << "After the pop operation the top index element becomes : " << q.front() << endl;


    return 0;
}