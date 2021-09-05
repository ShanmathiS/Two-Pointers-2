// Time Complexity : O(M+N)
// Space Complexity : 0(1)
// Did this code successfully run on Leetcode : yes
// Any problem you faced while coding this : no

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        int rows = matrix.size() - 1;
        int columns = matrix[0].size() - 1;
        int i = 0;
        int j = columns;
        int temp;
        
        while(i <= rows && j >= 0)
        {
            temp = matrix[i][j];
            if(target == temp) return true;
            else if(target > temp) i++;
            else j--;
        }
        return false;
    }
};
