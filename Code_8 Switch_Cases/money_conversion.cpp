#include<iostream>
using namespace std;

int main (){
    int amount;
    cout << "Enter the amount : " << ends;
    cin >> amount;
    int rs500,rs100,rs50,rs20,rs10,rs5,rs1;

    switch (1) {
        case 1 : if(amount >= 500){
            rs500 = amount/500;
            amount = amount % 500;
            cout << "Number of 500 ruppes notes are : " << rs500 <<endl;
        }

        case 2 : if(amount >= 100){
            rs100 = amount/100;
            amount = amount % 100;
            cout << "Number of 100 ruppes notes are : " << rs100 <<endl;
        }

        case 3 : if(amount >= 50){
            rs50 = amount/50;
            amount = amount % 50;
            cout << "Number of 50 ruppes notes are : " << rs50 <<endl;
        }

        case 4 : if(amount >= 20){
            rs20 = amount/20;
            amount = amount % 20;
            cout << "Number of 20 ruppes notes are : " << rs20 <<endl;
        }

        case 5 : if(amount >= 10){
            rs10 = amount/10;
            amount = amount % 10;
            cout << "Number of 10 ruppes notes are : " << rs10 <<endl;
        }

        case 6 : if(amount >= 5){
            rs5 = amount/5;
            amount = amount % 5;
            cout << "Number of 5 ruppes notes are : " << rs5 <<endl;
        }

        case 7 : if(amount >= 1){
            rs1 = amount/1;
            amount = amount % 1;
            cout << "Number of 1 ruppes notes are : " << rs1 <<endl;
        }
        break;

        default : cout << "Please enter a valid amount :)" << endl;
        break;
    }

}