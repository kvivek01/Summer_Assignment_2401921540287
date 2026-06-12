class Solution {
public:
    string expand(int ctr1, int ctr2, string s){
        int left = ctr1 - 1;
        int right = ctr2 + 1;

        string ans = s.substr(ctr1, ctr2 - ctr1 + 1);
        if(ctr1 != ctr2 && s[ctr1] != s[ctr2]) return "";
        
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            ans = string(1, s[left]) + ans + string(1, s[right]);
            left--;
            right++;
        }
        return ans;
    }
    string longestPalindrome(string s) {
        string result = "";
        for(int i = 0; i < s.size(); i++){
            string odd = expand(i, i, s);
            string even = expand(i, i + 1, s);
            string str = odd.size() > even.size() ? odd : even;
            if(result.size() < str.size()) result = str;
        }
        return result;
    }
};