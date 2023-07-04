#include <iostream>
using namespace std;
int main()
{
    int least;
    int arr[] = {13, 23, 54, 32, 43, 12, 65};
    for (int i = 0; i < 7 - 1; i++)
    {
        least = i;
        for (int j = i; j < 7; j++)
        {
            if (arr[j] < arr[least])
                least = j;
        }
        int temp = arr[i];
        arr[i] = arr[least];
        arr[least] = temp;
        cout << arr[i] << " ";
    }
}
