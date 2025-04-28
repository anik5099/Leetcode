class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()){
            return -1;
        }
        int pos = -1;
        
        for(int i=0; i<haystack.length(); i++){
            string foundsubString = "";
            int cnt = 0;
            for(int j=i; cnt<needle.length() and j<haystack.length(); j++){
                foundsubString += haystack[j];
                cnt++;
            }
            
            // cout << foundsubString << endl;
            if(foundsubString == needle){
                return i;
            }
        }
        
        return pos;
    }
};