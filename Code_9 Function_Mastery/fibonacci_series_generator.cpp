#include<iostream>
using namespace std;

void fibonacci_series_generator (int stages){
    int first = 0,second = 1,third;
    for(int i=0;i<stages;i++){
        cout << first << ends;
        third = first + second;
        first = second;
        second = third;
    }
}

int main(){
    int stages;
    cout << "Enter the total number of stages that you need in the fibonacci series : " << ends;
    cin >> stages;

    fibonacci_series_generator(stages);
    return 0;
}