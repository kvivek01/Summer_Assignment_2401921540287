class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(string str : strs){
            string temp = str;
            sort(str.begin(), str.end());
            mpp[str].push_back(temp);
        }

        vector<vector<string>> result;

        for(auto it : mpp){
            result.push_back(it.second);
        }

        return result;
    }
};