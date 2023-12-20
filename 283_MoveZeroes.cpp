class Solution {
public:
    bool restAreZeros(vector<int>& nums, int i) {
        for(int j = i; j < nums.size(); j++) {
            int currentNum = nums[j];

            if(currentNum != 0) {
                return false;
            }
        }
        return true;
    }
    void moveZeroes(vector<int>& nums) {
        int loopCount = nums.size();

        for(int i = 0; i < loopCount; i++) {
            int currentNum = nums[i];

            if (currentNum == 0) {
                if(restAreZeros(nums, i)) {
                    return;
                }
                nums.erase(nums.begin() + i, nums.begin() + i + 1);
                nums.push_back(0);
                i--;
            }
        }
    }
};
