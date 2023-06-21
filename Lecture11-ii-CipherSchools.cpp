#include <iostream>
using namespace std;

int main()
{
    cout << "The size of int in c++ is " << sizeof(int) << endl;
    cout << "The size of long long int in c++ is " << sizeof(long long int) << endl;

    int a;
    long long int b;

    cout << "Address of a is " << &a << endl;
    cout << "Address of b is " << &b << endl;
    return 0;
}

// output:
// The size of int in c++ is 4
// The size of long long int in c++ is 8
// Address of a is 0x16d87b238
// Address of b is 0x16d87b230
