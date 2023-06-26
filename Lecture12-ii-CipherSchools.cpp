#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    float b = 1.5;
    int *p = &a;
    float *q = &b;
    float c = *p + *q;
    cout << "value of a is: " << *p << endl;
    cout << "value of b is: " << *q << endl;
    cout << c << endl;
}
//output
//1
//1.5
//2.5
