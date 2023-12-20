class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        unordered_map<char,int> s_map;
        unordered_map<char,int> t_map;

        for(int i = 0; i < s.size(); i++) {
            char s_currentLetter = s[i];
            s_map[s_currentLetter] += 1;

            char t_currentLetter = t[i];
            t_map[t_currentLetter] += 1;
        }
        if(s_map != t_map) {
            return false;
        }
        return true;
    }
};
