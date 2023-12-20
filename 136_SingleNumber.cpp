class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1) {
            return nums[0];
        }
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i += 2) {
            int el_current = nums[i];
            int el_next = nums[i + 1];

            if(el_current != el_next) {
                return el_current;
            }
        }
        int el_last = nums[nums.size() - 1];
        return el_last;
    }
};
