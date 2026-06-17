class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> nums;
        unordered_map<int, int> mpp;
        for(int x  : nums2){
            while(!nums.empty() && x > nums.top()){
                mpp[nums.top()] = x;
                nums.pop();
            }
            nums.push(x);
        }

        vector<int> result;
        for(int x : nums1){
            if(mpp.find(x) == mpp.end()){
                result.push_back(-1);
            }
            else{
                result.push_back(mpp[x]);
            }
        }
        
        return result;
    }
};