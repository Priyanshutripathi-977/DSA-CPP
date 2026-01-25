#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
    cout << "in function\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 4, 6, 7};
    changeArr(arr, 4);
    cout << "in main function\n";//2,8,12,14(implicitly array is pass by refrence)
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}