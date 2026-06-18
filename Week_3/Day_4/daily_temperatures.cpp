class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> nums;
        vector<int> result(temperatures.size());
        for(int i = 0; i < temperatures.size(); i++){
            while(!nums.empty() && temperatures[i] > temperatures[nums.top()]){
                result[nums.top()] = i - nums.top();
                nums.pop();
            }
            nums.push(i);
        }

        return result; 
    }
};