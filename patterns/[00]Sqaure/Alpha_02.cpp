#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    { // outer loop
        char ch = 'A';
        for (int j = 0; j < n; j++)
        { // inner loop -> line starts
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
    return 0;
}