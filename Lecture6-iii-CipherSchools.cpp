#include <iostream>
using namespace std;
int main()
{
    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << i << " ";
    // }
    // Pre and Post increments:
    // int i, j, k;
    // i = j = k = 0;
    // cout << i << " " << j << " " << k << endl;
    // j = i++;
    // cout << i << " " << j << " " << k << endl;
    // k = ++i;
    // cout << i << " " << j << " " << k << endl;

    // for (int i = 1; i <= 100; i++)
    // {
    //     cout << i << " ";
    // }

    cout << "Guess the right number from 1 to 100 in 20 attempts" << endl;
    int i = 1; // initialize
    int a;
    while (i <= 20)
    {
        cin >> a; // loop
        if (a == 50)
        {
            cout << "Hurray! you guessed it right";
            break;
        }
        i++; // update
    }
}
