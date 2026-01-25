#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    { // outer loop

        for (int j = (i + 1); j > 0; j--)
        { // inner loop
            cout << j << " ";
        }

        cout << "\n";
    }
    return 0;
}