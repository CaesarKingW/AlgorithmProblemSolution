/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1)return 0;
        int ans = 0;
        vector<int>prefix_min(n, 0);
        int min_num = prices[0];
        for (int i = 1; i < n; ++i) {
            if(prices[i] > prices[i-1] && 
               (i == n-1 || prices[i] >= prices[i+1])) {
                ans += prices[i] - min_num;
                min_num = prices[i];
            } else {
                min_num = min(min_num, prices[i]);
            }
        }
        return ans;
    }
};
// @lc code=end

