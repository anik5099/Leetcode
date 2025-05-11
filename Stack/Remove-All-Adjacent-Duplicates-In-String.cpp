class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans = "";
        st.push(s[0]);
        // ans += s[0];
        for(int i=1; i<s.length(); i++){
            if(!st.empty() and s[i] == st.top()){
                // continue;
                st.pop();
            }
            else{
                // ans += s[i];
                // st.pop();
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};