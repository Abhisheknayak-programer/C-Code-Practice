#include<iostream>
using namespace std;

long long int sqRootFinder(int x){
    int start = 0,end = x;
    long long int ans = -1;
    long long int mid = start + ((end - start)/2);

    while(start <= end){
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid > x){
            end = mid - 1;
        }
        else if(mid*mid < x){
            ans = mid;
            start = mid+1;
        }

        mid = start + ((end - start)/2);
    }

    return ans;
}


int main(){
    int x;
    cout << "Enter the Number to find out the sqaure root : " << ends ;
    cin >> x;
    cout << "Square root of " << x << " is " << sqRootFinder(x) << endl;

    return 0;
}