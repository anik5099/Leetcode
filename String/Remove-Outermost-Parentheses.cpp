class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> st;
        int start = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                st.pop();
            }

            if(st.empty()){
                ans += s.substr(start+1, i-start-1);
                start = i+1;
            }
        }
        return ans;
    }
};