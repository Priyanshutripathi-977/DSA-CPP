#include <iostream>
#include<vector>
using namespace std;
//container with most water problem.

int MostWaterContainer(vector<int> height){
    int MaxWater = 0;
    for(int i = 0;i<height.size();i++){
        for(int j = i+1;j<height.size();j++){
            int width = j - i;
            int ht = min(height[i],height[j]);
            int area = width*ht;
            MaxWater=max(MaxWater,area);
        }
    }
    return MaxWater;
}
int main()
{
    int t;
    cout << "Enter the number of test cases to test: ";
    cin >> t;

    // 5 => 4 => 3 => 2 => 1 => 0 false
    while (t--)
    {
        int n;
        cout << "Enter the size of array: ";
        cin >> n;
        vector<int> height(n);
        cout << "Enter n element: ";
        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }
        cout << "the maximum amount of water is ";
        cout << MostWaterContainer(height) << endl;
    }
    return 0;
}