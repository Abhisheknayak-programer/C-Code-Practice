#include<iostream>
using namespace std;

int main(){
    int questions_solved = 1200;
    int day;
    cout << "Enter the day number : " << ends;
    cin >> day;

    switch (day){
                case 0 : switch (questions_solved){
                    case 1000 : cout << "Today is Sunday" << endl;
                                cout  << "Start from question number " << questions_solved << " to " << questions_solved + 100 << endl;
                                break;

                    case 1100 : cout << "Today is Sunday" << endl;
                                cout  << "Start from question number " << questions_solved << " to " << questions_solved + 100 << endl;
                                break;

                    case 1200 : cout << "Today is Sunday" << endl;
                                cout  << "Start from question number " << questions_solved << " to " << questions_solved + 100 << endl;
                                break;
                }
                cout << "CODE SLEEP EAT REPEAT" << endl;
                break;

                case 1 :cout << "Today is Monday" << endl;
                cout << "Make some youtube videos" <<endl;
                break;

                case 2 :cout << "Today is Tuesday" << endl;
                cout << "Learn something new about c++" <<endl;
                break;

                case 3 :cout << "Today is Wednesday" << endl;
                cout << "Do Javascript revision" <<endl;
                break;

                case 4 :cout << "Today is thursday" << endl;
                cout << "Do some DSA questions" <<endl;
                break;


                case 5 :cout << "Today is Friday" << endl;
                cout << "Solve recently Interviewed Questions" <<endl;
                break;

                case 6 :cout << "Today is Saturday" << endl;
                cout << "Make a plan for the next week" <<endl;
                break;

                default : cout << "Please select a day range from 0 to 6";
                break;
    }

}