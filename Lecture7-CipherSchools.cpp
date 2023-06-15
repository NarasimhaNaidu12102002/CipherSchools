#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a new Password: " << endl;
    int password;
    // cin >> password;
    // while (password < 999999)
    // {
    //     cout << "Please set a valid password!" << endl;
    //     cin >> password;
    // }
    // cout << "Password set successfully" << endl;

    // do
    // {
    //     cin >> password;
    // } while (password < 999999);

    int count = 0;
    while (1)
    {
        cout << "Chocolates" << endl;
        count++;
        if (count == 10)
            break;
    }

    for (int i = 0;; i++)
    {
        cout << i << endl;
        ;
        if (i == 10)
            break;
    }
    return 0;
}
