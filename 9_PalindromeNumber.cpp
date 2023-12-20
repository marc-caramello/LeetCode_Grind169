class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);

        for (int i = 0; i < x_str.size(); i++) {
            char currentLetter = x_str[i];
            char oppositeLetter = x_str[x_str.size() - 1 - i];

            if (currentLetter != oppositeLetter) {
                return false;
            }
        }
        return true;
    }
};
