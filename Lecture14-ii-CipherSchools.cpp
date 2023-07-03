#include <iostream>
using namespace std;

void findA(int *min, int *max, int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        if (*min > arr[i])
        {
            *min = arr[i];
        }
        if (*max < arr[i])
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int arr[5];
    int min, max;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i - 10;
    }
    findA(&min, &max, arr);
    cout << "min: " << min << " max: " << max << endl;
    return 0;
}
