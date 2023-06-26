#include <iostream>
using namespace std;
int main()
{
    // int a = 1;
    // float b = 1.5;
    // int *p = &a;
    // float *q = &b;
    // float c = *p + *q;
    // cout << "value of a is: " << *p << endl;
    // cout << "value of b is: " << *q << endl;
    // cout << c << endl;

    int a = 2;
    int b = 4;
    int *p = &a;
    int *q = &b;
    cout << p + 1 << endl;
    cout << p + 2 << endl;
    cout << q << endl;
    cout << q + 1 << endl;
}
//output:
// 0x16f35b220
// 0x16f35b224
// 0x16f35b218
// 0x16f35b21c
