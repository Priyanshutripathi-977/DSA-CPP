#include <iostream>
using namespace std;
// for finding largest number in arrays.
int main()
{
    int nums[] = {5, 17, -8, 9, 22, -20, 3};
    int size = 6;

    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    { // we can use max function instead on if statement.
        if (largest < nums[i])
        { // largest = max(largest, nums[i]);
            largest = nums[i];
        }
    }
    cout << "largest = " << largest << endl;
    return 0;
}