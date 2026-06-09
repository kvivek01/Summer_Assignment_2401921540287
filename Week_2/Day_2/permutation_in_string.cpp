class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for(int i = 0; i < s1.size(); i++){
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        int matches = 0;
        for(int i = 0; i < 26; i++){
            if(freq1[i] == freq2[i]) matches++;
        }

        for(int i = 0; i < s2.size() - s1.size(); i++){
            if(matches == 26) return true;

            int in = s2[i + s1.size()] - 'a';
            freq2[in]++;
            if(freq2[in] == freq1[in])      matches++;
            else if(freq2[in] == freq1[in] + 1)  matches--;

            int out = s2[i] - 'a';
            freq2[out]--;
            if(freq2[out] == freq1[out])         matches++;
            else if(freq2[out] == freq1[out] - 1) matches--;
        }

        return matches == 26;
    }
};