class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> mpp(26);
        for(char c : magazine)  mpp[c - 'a']++;
        for(char c : ransomNote)  mpp[c - 'a']--;

        for(int x : mpp){
            if(x < 0){
                return false;
            }
        }
        return true;
    }
};