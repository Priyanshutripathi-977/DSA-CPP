#include <iostream>
using namespace std;

int DecToBinary(int DeciNum)
{
    int BinaryNum = 0;
    int pow = 1;

    while (DeciNum > 0)
    {
        int rem = DeciNum % 2;
        DeciNum /= 2;

        BinaryNum += rem * pow;
        pow *= 10;
    }
    return BinaryNum;
}

int main()
{
    int DeciNum;

    cout << "enter the decimal number : ";
    cin >> DeciNum;

    cout << "binary form of decimal number " << DeciNum << " is : "  << DecToBinary(DeciNum) << endl;
    return 0;
}