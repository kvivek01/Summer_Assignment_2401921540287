class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> ans;
        for(int i = 0; i < nums.size(); i++){
            int rem = target - nums[i];
            if(ans.count(rem)){
                return {i, ans[rem]};
            }
            ans[nums[i]] = i;
        }
        return {};
    }
};