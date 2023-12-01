class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        for currentLetter in ransomNote:
            if(currentLetter in magazine):
                magazine = ''.join(magazine.split(currentLetter, 1))
            else:
                return False
        return True
