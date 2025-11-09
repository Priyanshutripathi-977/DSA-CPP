#include <iostream>
using namespace std;

int main()
{
    int size = 5;//size = size of marks(array).
    //int marks[size] = {100, 97, 97, 98, 90}; [for storing the marks of 5 students]
    
    //now taking input from user.
    int marks[size];

    cout << "enter the elements of the array : " << endl;
    for(int i = 0; i < size; i++) {
    cin >> marks[i];
    }
    double price[100]; // for storing the price of 100 items.
     
    double amount[] = {98.50, 85.00, 50.00}; // automatically size of array is defined as 3

    /*cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;    {using cout statements to print the arrays}
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    // cout << marks[5] << endl;[0 to size-1]*/

    //for finding size of array.
    /*cout << sizeof(marks)/sizeof(int) << endl;
    cout << sizeof(price)/sizeof(double) << endl;
    cout << sizeof(amount)/sizeof(double) << endl;*/

    //running a loop for printing array.
    for (int i = 0; i < size; i++) {
        cout << marks[i] << " " ;
    }
    cout << endl;
    return 0;
}