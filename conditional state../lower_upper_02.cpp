// To find whether a char is uppercase or lowercase(ASCII method).
//[A-Z]=(65-90) and [a-z]=(starts from 97)**{inplicit conversion}.
#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "enter the chracter : ";
    cin >> character;

    if (character >= 65 && character <= 90)
    {
        cout << "uppercase\n";
    }
    else
    {
        cout << "lowercase\n";
    }
    return 0;
}