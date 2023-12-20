class Solution {
public:
    string newStr(string s) {
        string newStr = "";

        for(int i = 0; i < s.size(); i++) {
            char currentLetter = s[i];

            if(isalpha(currentLetter) || isdigit(currentLetter)) {
                newStr += tolower(currentLetter);
            }
        }
        return newStr;
    }
    bool isPalindrome(string s) {
        s = newStr(s);
        int strLen = s.size();

        for(int i = 0; i < strLen; i++) {
            char currentLetter = s[i];
            char oppositeLetter = s[strLen - i - 1];
            
            if(currentLetter != oppositeLetter) {
                return false;
            }
        }
        return true;
    }
};
