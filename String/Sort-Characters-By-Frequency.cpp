class Solution {
public:
    static bool cmp(const pair<char, int> &a, const pair<char, int> &b){
        return a.second > b.second;
    }
    string frequencySort(string s) {
        
        map<char, int> cnt;

        for(int i=0; i<s.length(); i++){
            cnt[s[i]]++;
        }

        vector<pair<char, int> > v;

        for(auto it : cnt){
            v.push_back(pair(it.first, it.second));
        }

        sort(v.begin(), v.end(), cmp);

        string ans = "";

        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[i].second; j++){
                ans += v[i].first;
            }
        }

        return ans;
    }
};