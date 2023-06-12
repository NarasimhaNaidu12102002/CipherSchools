#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Give 5 input numbers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "the elements of the array are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "the elements in reverse order are:" << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
