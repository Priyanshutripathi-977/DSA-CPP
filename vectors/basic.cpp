#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;             // size=0
    vector<int> vec2 = {1, 2, 3}; // size=3
    vector<int> vec3(3, 2);       // size = 3,value at every index = 2
    for (int val : vec3)
    { // for each loop
        cout << val << endl;//val = value at each index.
    }
                                  /*for (int i = 0; i < 3; i++)
                                  {
                                      cout << vec3[i] << endl;
                                      }*/
    // instead of using normal for loop we use for each loop for vectors
    return 0;
}