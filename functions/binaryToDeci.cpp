#include <iostream>
using namespace std;

int BinaryToDeci(int BinaryNum)
{
    int DeciNum = 0;
    int pow = 1;

    while (BinaryNum > 0)
    {
        int rem = BinaryNum % 10;
        BinaryNum /= 10;

        DeciNum += rem * pow;
        pow *= 2;
    }
    return DeciNum;
}

int main()
{
    int BinaryNum;

    cout << "enter the Binary number : ";
    cin >> BinaryNum;

    cout << "Decimal form of Binary number " << BinaryNum << " is : "  << BinaryToDeci(BinaryNum) << endl;
    return 0;
}