#include<iostream>
using namespace std;

int main (){
    int a, b;
    char op;
    cout << "Enter the two numbers with whom you want to do the calculations" << ends;
    cin >> a >> b;
    cout << "Enter the operator which operation did you need : " << ends;
    cin >> op;

    switch(op) {
        case '+' : cout << a + b  << endl; 
        break;
        
        case '-' : cout << a - b << endl;
        break;

        case '%' : cout << a % b << endl;
        break;

        case '*' : cout << a * b << endl;
        break;

        case '/' : cout << a / b << endl;
        break;

        default : cout << "Please enter a valid operator from the list ('+','-','*','/','%')";
        break;
    }

}