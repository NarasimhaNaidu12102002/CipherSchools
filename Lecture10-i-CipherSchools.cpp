#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c;
    c = a + b;
    cout << "the value of c is " << c << endl;
    return c;
}

int main()
{
    int a, b, c;
    cout << "Input a,b,c:" << endl;
    cin >> a >> b >> c;
    cout << "In sum func" << endl;
    sum(a, b);
    cout << "outside sum func" << endl;
    cout << "the value of c is " << c << endl;
    return 0;
}
