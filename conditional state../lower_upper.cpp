// To find whether a char is uppercase or lowercase.
#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "enter the chracter : ";
    cin >> character;

    if (character >= 'A' && character <= 'Z')
    {
        cout << "uppercase\n";
    }
    else
    {
        cout << "lowercase\n";
    }
    return 0;
}