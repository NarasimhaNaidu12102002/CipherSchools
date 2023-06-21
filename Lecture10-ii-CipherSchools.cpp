#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
    cout << "The value of a and b inside func are " << a << " " << b << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The value of a and b initially are " << a << " " << b << endl;
    swap(a, b);
    cout << "The value of a and b finally are " << a << " " << b << endl;
}
