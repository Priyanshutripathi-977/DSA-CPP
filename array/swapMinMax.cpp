#include <iostream>
using namespace std;

void swap(int arr[], int size)
{
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    { // we can use max function instead on if statement.
        if (largest < arr[i])
        { // largest = max(largest, nums[i]);
            largest = arr[i];
        }
    }
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    { // we can use min function instead on if statement.
        if (smallest > arr[i])
        { // smallest = min(smallest, nums[i]);
            smallest = arr[i];
        }
    }
    swap(smallest, largest);
    cout << largest << " and "
         << smallest << endl;
}
int main()
{
    int arr[] = {2, 1, 3, 5, 4}; // largest=5,smallest=1
    cout << "before swapping largest = 5 and smallest = 1 \n";
    cout << "after swapping largest and smallest respectivelly are : ";
    swap(arr, 5);
    return 0;
}