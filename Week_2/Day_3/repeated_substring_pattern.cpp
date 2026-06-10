class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i = 1; i <= s.size() / 2; i++){
            if(s.size() % i == 0){
                string pattern = s.substr(0, i);
                string repeated = "";
                int times = s.size() / i;
                for(int j = 0; j < times; j++)
                    repeated += pattern;
                if(repeated == s) return true;
            }
        }
        return false;
    }
};