#include <iostream>
using namespace std;
// for finding smallest number in arrays.
int main()
{
    int nums[] = {5, 17, -8, 9, 12, -20, 3};
    int size = 6;

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    { // we can use min function instead on if statement.
        if (smallest > nums[i])
        { // smallest = min(smallest, nums[i]);
            smallest = nums[i];
        }
    }
    cout << "smallest = " << smallest << endl;
    return 0;
} 