#include<iostream>
using namespace std;
void change(int a, int b)
{
    a = a + 2;
    b = b + 2;
    cout << a << " " << b << endl;
}

int sum(int, int); // prototype

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    cout << "In change func" << endl;
    change(a, b);
    cout << "after change func" << endl;
    cout << a << " " << b << endl;
    cout << "sum of a and b is" << endl;
    cout << sum(a, b) << endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
