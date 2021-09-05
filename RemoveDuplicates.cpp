// Time Complexity : O(N)
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : yes
// Any problem you faced while coding this : no

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slowptr = 0;
        int fastptr = 0;
        int count = 0;
        while (fastptr < nums.size())
        {
            if (fastptr != 0 && (nums[fastptr - 1] == nums[fastptr]))
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if (count <= 2)
            {
                nums[slowptr] = nums[fastptr];
                slowptr++;
            }
            fastptr++;
        }
        return slowptr;
    }
};
