class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> allNums;

        for(int el : nums) {
            if (allNums[el]) {
                return true;
            }
            allNums[el] = true;
        }
        return false;
    }
};
