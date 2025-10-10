// condition?str1:str2;
// if condition is true=str1 and if condition is false=str2.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    cout << (n >= 0 ? "positive\n" : "negative\n");
    return 0;
}
