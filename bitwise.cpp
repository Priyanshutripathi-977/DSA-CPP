#include <iostream>
using namespace std;

int main()
{
   int num1, num2, Result;
   char op;
    cout << "enter a : ";
    cin >> num1;

    cout << "enter operator : ";
    cin >> op;

    cout << "enter b : ";
    cin >> num2;

switch (op) {
    case '&':
        Result = num1 & num2;
        cout << Result << endl;
        break;

    case '|':
        Result = num1 | num2;
        cout << Result << endl;
        break;

    case '^':
        Result = num1 ^ num2;
        cout << Result << endl;
        break;

    default:
        cout << "error: invalid operator" << endl;
    }
    return 0;
}