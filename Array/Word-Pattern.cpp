class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        
        // Split string into words
        while(ss >> word) {
            words.push_back(word);
        }
        
        // Check length match
        if(words.size() != pattern.size()) {
            return false;
        }
        
        unordered_map<char, string> char_to_word;
        unordered_map<string, char> word_to_char;
        
        for(int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];
            
            // Check existing mappings
            if(char_to_word.count(c)) {
                if(char_to_word[c] != w) {
                    return false;
                }
            } else {
                if(word_to_char.count(w)) {
                    return false;
                }
                // Create new mappings
                char_to_word[c] = w;
                word_to_char[w] = c;
            }
        }
        
        return true;
    }
};