class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int largest = 0;
        while(left < right){
            int area = min(height[left], height[right]) * (right - left);
            largest = max(largest, area);
            if(height[right] > height[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return largest;
    }
};