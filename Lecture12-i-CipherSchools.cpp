#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    int *p;
    p = &a;
    float *q;
    q = &b;
    cout << "Address of a is: " << p << endl;
    cout << "Address of b is: " << q << endl;
}
