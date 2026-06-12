class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt = 1;
        int k = 0;

        for(int i = 1; i < chars.size(); i++){
            if(chars[i] == chars[i - 1]) {
                cnt++;
            } else {
                chars[k++] = chars[i - 1];

                if(cnt > 1) {
                    string cntStr = to_string(cnt);
                    for(char c : cntStr) chars[k++] = c;
                }

                cnt = 1;
            }
        }
        
        chars[k++] = chars.back();
        if(cnt > 1) {
            string cntStr = to_string(cnt);
            for(char c : cntStr) chars[k++] = c;
        }

        return k;
    }
};