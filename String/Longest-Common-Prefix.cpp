class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_len = 200;
        for(int i=0; i<strs.size(); i++){
            min_len = min(min_len, int(strs[i].length()));
        }
        
        string lcp = "";
        for(int i=0; i<min_len; i++){
            bool flag = true;
            char check = strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(strs[j][i] != check){
                    flag = false;
                    break;
                }
            }
            if(flag){
                lcp += check;
            }
            else{
                break;
            }
        }
        
        return lcp;
    }
};