class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> allLetters; // key = letter, value = number of occurances
        
        for(int i = 0; i < s.length(); i++) {
            char currentLetter = s[i];
            allLetters[currentLetter] += 1;
        }
        int total = 0;
        unordered_map<char,bool> alreadyDone;
        
        for(int i = 0; i < s.length(); i++) {
            char currentLetter = s[i];
            int currentLetter_count = allLetters[currentLetter];

            if (currentLetter_count >= 2 && !alreadyDone[currentLetter]) {
                cout << currentLetter << "=" << currentLetter_count << "\n";
                if (currentLetter_count % 2 == 1) {
                    total += (currentLetter_count - 1);
                }
                else {
                    total += currentLetter_count;
                }                
            }
            alreadyDone[currentLetter] = true;
        }
        if(s.length() == total) {
            return total;
        }
        return total + 1;
    }
};
