#include <iostream>
using namespace std;

int sumArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int productArr(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int arr[] = {2, 3, 4, 1};

    cout << "sum = " << sumArr(arr, 4) << endl;
    cout << "product = " << productArr(arr, 4) << endl;

    return 0;
}
