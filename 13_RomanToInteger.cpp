class Solution {
public:
    int getNum_subtraction(char el_current, char el_next) {
        if(el_current == 'I' && el_next == 'V') {
            return 4;
        }
        else if(el_current == 'I' && el_next == 'X') {
            return 9;
        }
        else if(el_current == 'X' && el_next == 'L') {
            return 40;
        }
        else if(el_current == 'X' && el_next == 'C') {
            return 90;
        }
        else if(el_current == 'C' && el_next == 'D') {
            return 400;
        }
        else if(el_current == 'C' && el_next == 'M') {
            return 900;
        }
        return 0;
    }
    int getNum_normal(char letter) {
        if(letter == 'I') {
            return 1;
        }
        else if(letter == 'V') {
            return 5;
        }
        else if(letter == 'X') {
            return 10;
        }
        else if(letter == 'L') {
            return 50;
        }
        else if(letter == 'C') {
            return 100;
        }
        else if(letter == 'D') {
            return 500;
        }
        else if(letter == 'M') {
            return 1000;
        }
        return -1;
    }
    int romanToInt(string s) {
        vector<int> allInts;
        int totalSum = 0;

        for(int i = 0; i < s.size(); i++) {
            char el_current = s[i];
            bool notLastElement = (i < s.size() - 1);

            if(notLastElement) {
                char el_next = s[i + 1];
                int subtactionSum = getNum_subtraction(el_current, el_next);
                bool subtractionIsHappening = (subtactionSum != 0);

                if(subtractionIsHappening) {
                    totalSum += subtactionSum;
                    i++;
                }
                else {
                    totalSum += getNum_normal(el_current);
                }
            }
            else {
                totalSum += getNum_normal(el_current);
            }
        }
        return totalSum;
    }
};
