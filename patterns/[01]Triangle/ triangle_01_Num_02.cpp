#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    { // outer loop
        for (int j = 0; j < i + 1; j++)
        { // inner loop
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}