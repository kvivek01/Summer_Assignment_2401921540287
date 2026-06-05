class Solution {
public:
    bool isPalindrome(string s) {
        string s_new = "";
        for(char c : s){
            if(isalnum(c)){
                s_new += tolower(c);
            }
        }
        string rev = s_new;
        reverse(rev.begin(), rev.end());
        return (rev == s_new);
    }
};