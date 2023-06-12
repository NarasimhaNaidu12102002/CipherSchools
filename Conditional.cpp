#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Input 4 integers a,b,c,d :" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << (a > b && c > d) << endl;
    cout << (a > b || c > d);
}