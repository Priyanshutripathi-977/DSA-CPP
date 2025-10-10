#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "enter the number up to which we have to sum, n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if (i == 100)
        {
            break; // keyword
        }
    }

    cout << "sum = " << sum << "\n";
    return 0;
}