class Solution {
public:
    bool allMatch(vector<string>& strs, char currentLetter, int i) {
        for(int j = 0; j < strs.size(); j++) {
            if(currentLetter != strs[j][i]) {
                return false;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = "";

        for(int i = 0; i < strs[0].size(); i++) {
            char currentLetter = strs[0][i];

            if(allMatch(strs, currentLetter, i)) {
                longestPrefix += currentLetter;
            }
            else {
                break;
            }
        }
        return longestPrefix;
    }
};
