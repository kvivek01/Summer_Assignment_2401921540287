class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit = 0, buy = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int cost = nums[i] - buy;
            profit = max(profit, cost);
            buy = min(buy, nums[i]);
        }
        return profit;
    }
};