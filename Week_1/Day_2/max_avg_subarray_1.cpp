class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long maxiSum = INT_MIN;
        long long sum = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        maxiSum = max(maxiSum, sum);
        for(int j = k; j < nums.size(); j++){
            sum += nums[j];
            sum -= nums[j - k];
            maxiSum = max(maxiSum, sum);
        }
        return ((double)maxiSum / k);
    }
};