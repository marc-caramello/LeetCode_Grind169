class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for (char currentLetter : ransomNote) {
            int removeThisIndex = magazine.find(currentLetter);

            if (removeThisIndex != std::string::npos) {
                magazine.erase(removeThisIndex, 1);
            }
            else {
                return false;
            }
        }
        return true;
    }
};
