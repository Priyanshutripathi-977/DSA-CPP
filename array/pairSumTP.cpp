#include <iostream>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
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
        vector<int> nums(n);
        int target ;
        cout << "Enter n element: ";
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        cout << "Enter the target: ";
        cin >> target;
        vector<int> ans = pairSum(nums, target);
        if (ans.size() != 0)
            cout << ans[0] << " " << ans[1] << endl;
        else
            cout << "The pair does not exist" << endl;
    }

    return 0;
}
