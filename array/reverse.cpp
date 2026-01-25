#include <iostream>
using namespace std;

int main()
{
    int n, i, arr[i], temp[i];

    cout << "enter the size of the array : ";
    cin >> n; // n = size.
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < (n / 2); i++)
    {
        temp[i] = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}