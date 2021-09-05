// Time Complexity : O(N+M)
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : yes
// Any problem you faced while coding this : No

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = nums1.size() - 1;// index indicating entire range of nums1
        int i = m - 1;
        int j = n - 1;
        while (index >= 0)
        {
            if(i >= 0 && j >= 0) //passes till array elements are exhauseted for one of the arrays
            {
                if(nums1[i] > nums2[j])
                {
                    nums1[index] = nums1[i];
                    i--;
                }
                else 
                {
                    nums1[index] = nums2[j];
                    j--;
                }
                index--;
            }
            else
            {
                if(i >= 0)
                {
                    nums1[index] = nums1[i];
                    i--;
                }
                else
                {
                    nums1[index] = nums2[j];
                    j--;
                }
                index--;
            }
        }
    }
};
