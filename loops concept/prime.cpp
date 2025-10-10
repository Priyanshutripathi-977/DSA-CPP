#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    
    cout << "enter the number : ";
    cin >> n;

    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
    cout << "\n";
    return 0;
}