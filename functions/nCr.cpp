#include <iostream>
using namespace std;

int Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n, r, nCr,numerator,denominator;
    cout << "enter n : ";
    cin >> n;
    cout << "enter r : ";
    cin >> r;

    numerator=Factorial(n);
    denominator=Factorial(n-r)*Factorial(r);

    nCr = numerator / denominator;

    cout << "nCr=" << nCr << endl;
    return 0;
}