#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number n : ";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        char ch = 'E';
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }

    return 0;
}