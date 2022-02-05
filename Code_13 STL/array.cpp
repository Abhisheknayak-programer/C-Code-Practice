#include<iostream>
#include<array>
using namespace std;

int main(){
    array <int,4> arr = {23,4,12,14};
    cout << arr.size() << endl;

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << ends;
    }cout << endl;

    cout << "Element Present at Index 2 is " << arr.at(2) << endl;

    cout << "Checking wheather the array is emty or not : " << arr.empty() << endl;

    cout << "First Element of the array is : " << arr.front() << endl;

    cout << "Last Element of the array is : " << arr.back() << endl;


    return 0;
}