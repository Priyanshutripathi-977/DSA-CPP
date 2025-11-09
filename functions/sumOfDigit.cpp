#include <iostream>
using namespace std;

int num;

int SumOfDigits(int num)
{
    int digitSum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        digitSum += lastDigit;
        num /= 10;
    }

    return digitSum;
} 

int main()
{
    
    cout << "Enter the number : ";
    cin >> num;
    cout << "sum = " << SumOfDigits(num) << endl;

    return 0;
}