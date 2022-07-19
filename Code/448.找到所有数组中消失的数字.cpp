/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>count(n+1, 0);
        vector<int>ans;
        for (int i =1; i <= n; ++i) {
            count[nums[i-1]]++;
        }
        for (int i = 1; i <= n; ++i) {
            if (count[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
// @lc code=end

