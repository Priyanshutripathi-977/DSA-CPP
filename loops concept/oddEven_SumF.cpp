#include <iostream>
using namespace std;
// sum of odd and even numbers from 1 to N. k
int main()
{
    int n;
    int oddSum = 0;
    int evenSum = 0;
    cout << "enter the number up to which we have to sum, n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
        else
        {
            evenSum += i;
        }
    }

    cout << "odd sum = " << oddSum << "\n";
    cout << "even sum = " << evenSum << "\n";
    return 0;
}