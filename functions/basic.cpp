#include <iostream>
using namespace std;

/* syntax
 returnType funType(type p1,type p2,..){
 //do some work
}*/

int sum(int a, int b)
{
    int s = a + b; 
    return s;
}

int main()
{
    cout << sum(10, 5) << endl;
    return 0;
}
