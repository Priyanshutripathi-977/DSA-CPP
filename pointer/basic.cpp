#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int * ptr = &a;
    int ** parptr = &ptr;//address of pointer
    int **ptr1 = NULL;

    cout << &ptr << endl;
    cout << parptr << endl;
    cout << *(&a) << endl;//*-->derefrence operator(value at address).
    cout << *(ptr) << endl;//10
    cout << **(parptr) << endl;
    cout << *(parptr) << endl;
    cout << ptr << endl;
    cout << ptr1 << endl;
    return 0;
}