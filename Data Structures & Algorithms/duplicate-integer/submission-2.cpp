// leetcode 
#include <vector>
#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort array
        sort(nums.begin(), nums.end());

        // start from 2nd element, compare left neighbor
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
        

};