class Solution {
public:
    string decodeString(string s) {
        stack<pair<string, int>> st;
        string current = "";
        int k = 0;

        for(char c : s){
            if(isdigit(c)){
                k = k * 10 + (c - '0');
            }
            else if(c == '['){
                st.push({current, k});
                current = "";
                k = 0;
            }
            else if(c == ']'){
                auto [prev_string, num] = st.top();
                st.pop();
                string repeated = "";
                while(num--) repeated += current;
                current = prev_string + repeated;
            }
            else{
                current += c;
            }
        }

        return current;
    }
};