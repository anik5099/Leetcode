class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        char ans = ' ';
        for(int i=0; i<t.length(); i++){
            if(mp[t[i]] > 0){
                // continue;
                // cout << mp[t[i]] << endl;
                mp[t[i]]--;
            }
            else{
                ans = t[i];
                break;
            }
        }

        return ans;
    }
};