#include <iostream>
using namespace std;

int Fact(int n)//parameters
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    cout << Fact(10) << endl;//arguments.
    cout << Fact(5) << endl;//arguments.
    cout << Fact(15) << endl;//arguments.
    return 0;
}