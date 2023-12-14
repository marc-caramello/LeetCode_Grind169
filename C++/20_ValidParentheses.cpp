class Solution {
public:
    bool matchIsFound(char prevLetter, char currentLetter) {
        bool curvedMatches = (prevLetter == '(' && currentLetter == ')');
        bool curlyMatches = (prevLetter == '{' && currentLetter == '}');
        bool squareMatches = (prevLetter == '[' && currentLetter == ']');

        if(curvedMatches || curlyMatches || squareMatches) {
            return true;
        }
        return false;
    }
    bool isValid(string s) {
        stack<char> entireStack;
        
        for (int i = 0; i < s.length(); i++) {
            char currentLetter = s[i];

            if (i > 0 && !entireStack.empty()) {
                char prevLetter = entireStack.top();

                if (matchIsFound(prevLetter, currentLetter)) {
                    entireStack.pop();
                }
                else {
                    entireStack.push(currentLetter);
                }
            }
            else {
                entireStack.push(currentLetter);
            }
        }
        if (entireStack.empty()) {
            return true;
        }
        return false;
    }
};
