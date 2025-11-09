#include <iostream>
using namespace std;

int SumN(int n)//parameters
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    cout << SumN(10) << endl;//arguments
    cout << SumN(5) << endl;//arguments
    cout << SumN(15) << endl;//arguments
    return 0;
}