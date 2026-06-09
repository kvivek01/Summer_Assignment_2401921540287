class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size())     return {};
        vector<int> s_freq(26, 0);
        vector<int> p_freq(26, 0);
        for(int i = 0; i < p.size(); i++){
            s_freq[s[i] - 'a']++;
            p_freq[p[i] - 'a']++;
        }
        
        vector<int> result;
        for(int i = 0; i <= s.size() - p.size(); i++){
            if(s_freq == p_freq)    result.push_back(i);
            if(i < (int)s.size() - (int)p.size()){
                s_freq[s[i] - 'a']--;
                s_freq[s[i + p.size()] - 'a']++;
            }
        }
        return result;
    }
};