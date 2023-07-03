#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int c = *x;
    *x = *y;
    *y = c;
}

int main()
{
    int a = 5;
    int b = 3;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}
