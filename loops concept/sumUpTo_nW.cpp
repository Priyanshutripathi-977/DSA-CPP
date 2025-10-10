#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int i = 1;
    cout << "enter the number up to which we have to sum, n : ";
    cin >> n;

    while (i <= n)
    {
        sum += i;
        i++;
    }

    cout << "sum = " << sum << "\n";
    return 0;
}