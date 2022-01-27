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

double MorePrecisionAnswer(int x,int precisionDigitsUpto, int tempsol){
    double solution = tempsol;
    double factor = 1;

    for(int i=0;i<precisionDigitsUpto;i++){
        factor = factor/10;
        for(double j = solution;j*j<x;j=j+factor){
            solution = j;
        }
    }

    return solution;
}


int main(){
    int x;
    cout << "Enter the Number to find out the sqaure root : " << ends ;
    cin >> x;
    int tempsol = sqRootFinder(x);
    cout << "Square root of " << x << " is " << MorePrecisionAnswer(x,3,tempsol) << endl;

    return 0;
}