#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector <int> v;

    v.push_back(906);
    v.push_back(123);
    v.push_back(12);
    v.push_back(78);

    cout << "Index of 78 is : " << binary_search(v.begin(),v.end(),78) << endl; 

    cout << "LowerBound : " << lower_bound(v.begin(),v.end(),12) - v.begin() << endl;

    cout << "UpperBound : " << upper_bound(v.begin(),v.end(),78) - v.begin() << endl;

    int a = 12;
    int b = 123;
    swap(a,b);

    cout << "The value of a is : " << a  << " value of b is : " << b << endl;

    cout << "The Minimum value after swap is  : " << min(a,b) << endl;

    cout << "The Maximum value after swap is  : " << max(a,b) << endl;

    string ab = "Abhishek Nayak";    
    reverse(ab.begin(),ab.end());
    cout << ab << endl;

    cout << "Befor Sorting : " << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << ends;
    }cout << endl;

    sort(v.begin(),v.end());
    
    cout << "After Sorting : " << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << ends;
    }cout << endl;

    // Rotating the array after the two steps
    rotate(v.begin(),v.begin()+2,v.end());
    cout << "After Rotating 2 Steps : " << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << ends;
    }cout << endl;

    return 0;
}