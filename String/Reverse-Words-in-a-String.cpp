class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string word;
        stack<string> st;
        while(str >> word){
            st.push(word);
        }

        string ans = "";
        if(!st.empty()){
            ans += st.top();
            st.pop();
            // ans += " ";
        }

        while(!st.empty()){
            ans += " ";
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};