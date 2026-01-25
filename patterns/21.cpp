#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;

    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n - 1; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}