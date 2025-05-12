class Solution {
public:
    int lengthOfLastWord(string s) {
        string last;
        stringstream ss(s);
        string word;
        while(ss >> word){
            last = word;
        }
        return (int)last.length();
    }
};