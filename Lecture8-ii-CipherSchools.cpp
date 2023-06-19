#include <iostream>
using namespace std;

void printHello()
{
    cout << "Hello World" << endl;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    printHello();
    int a, b;
    cin >> a >> b;
    int c = add(a, b);
    cout << c;
    return 0;
}
