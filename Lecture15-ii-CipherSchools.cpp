#include <iostream>
using namespace std;
int main()
{
    string a;
    string b;
    cin >> a >> b;
    cout << "Input strings are " << a << " and " << b << endl;
    string c = a + b;
    cout << c << endl;
    cout << "The length of c is: " << c.length() << endl;
    return 0;
}
