#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "person can vote for elections.\n";
    }
    else
    {
        cout << "person can't vote for elections.\n";
    }

    return 0;
}