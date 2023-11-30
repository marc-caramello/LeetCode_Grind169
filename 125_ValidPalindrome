import re

class Solution(object):
    def isPalindrome(self, s):
        s = re.sub('[^A-Za-z0-9]+', '', s)
        s = s.lower()
        stringLength = len(s)
        
        if(stringLength <= 1):
            return True
        for i,el in enumerate(s):
            if(el != s[stringLength-i-1]):
                return False
        return True
