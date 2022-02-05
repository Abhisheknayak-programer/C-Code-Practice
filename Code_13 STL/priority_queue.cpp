#include<iostream>
#include<queue>
using namespace std;

int main(){
    // Creating a max Heap
    priority_queue <int> MaxHeap;

    // Creating a min Heap
    priority_queue <int, vector<int>,greater<int>> MinHeap;
    
    MaxHeap.push(19);
    MaxHeap.push(2);
    MaxHeap.push(13);
    MaxHeap.push(94);

    MinHeap.push(41);
    MinHeap.push(13);
    MinHeap.push(219);
    MinHeap.push(1);

    cout << "Printing the MAXHEAP : " << endl;
    for(int i=0;i<MaxHeap.size();i++){
        cout << MaxHeap.top() << ends;
        MaxHeap.pop();
    }

    cout << endl << "Printing the MINHEAP : " << endl;
    for(int i=0;i<MinHeap.size();i++){
        cout << MinHeap.top() << ends;
        MinHeap.pop();
    }

    return 0;
}