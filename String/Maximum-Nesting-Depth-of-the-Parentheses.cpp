class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        // int cnt = 0;
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                // cnt++;
                st.push('(');
                ans = max(ans, (int)st.size());
                // cout << i << ' ' << ans << endl;
            }
            else if(s[i] == ')'){
                // ans = max(ans, (int)st.size());
                if(!st.empty()) st.pop();
            }
        }

        return ans;
    }
};