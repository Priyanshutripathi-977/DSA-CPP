#include <iostream>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int val : nums) {
            int freq = 0;
            for (int ele : nums) {
                if (ele == val) {
                    freq++;
                }
            }
            if (freq > n / 2) {
                return val;
            }
        }
     return -1;   
    }