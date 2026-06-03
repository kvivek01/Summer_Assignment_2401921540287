class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int> arr(n);
        int i = 0, j = n - 1 , pos = n - 1;
        while(i <= j){
            int leftsq = nums[i]*nums[i], rightsq = nums[j]*nums[j];
            if(leftsq < rightsq){
                arr[pos--] = rightsq;
                j--;
            }
            else{
                arr[pos--] = leftsq;
                i++;
            }
        }
        return arr;
    }
};