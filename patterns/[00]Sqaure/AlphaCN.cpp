#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';

    cout << "enter the number n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << "after pattern : " << ch << "\n";
    return 0;
}