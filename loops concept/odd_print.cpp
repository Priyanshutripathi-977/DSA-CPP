#include <iostream>
using namespace std;
// to print odd numbers from 1 to N.
int main()
{
    int n;

    cout << "enter the number up to which we have to print, n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}