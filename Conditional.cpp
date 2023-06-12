#include <iostream>
using namespace std;
int main()
{
    // int a, b, c, d;
    // cout << "Input 4 integers a,b,c,d :" << endl;
    // cin >> a;
    // cin >> b;
    // cin >> c;
    // cin >> d;
    // cout << (a > b && c > d) << endl;
    // cout << (a > b || c > d);

    // float a, b;
    // cout << "input two numbers a and b" << endl;
    // cin >> a >> b;
    // if (a > 1.5 && b > 1.5)
    // {
    //     cout << "a and b both are greater than 1.5";
    // }
    // else
    // {
    //     cout << "a and b both are not greater1 than 1.5";
    // }

    // float marks;
    // cout << "enter the marks:" << endl;
    // cin >> marks;
    // if (marks > 90)
    // {
    //     cout << "A+";
    // }
    // else if (marks > 80)
    // {
    //     cout << "A";
    // }
    // else if (marks > 70)
    // {
    //     cout << "B+";
    // }
    // else
    // {
    //     cout << "Pass";
    // }

    int a;
    cout << "enter a value between 1 and 3:" << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "value is 1";
        break;
    case 2:
        cout << "value is 2";
        break;
    case 3:
        cout << "value is 3";
        break;
    default:
        cout << "Enter a valid number between 1 and 3";
        break;
    }
}