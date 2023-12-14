class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> allPrevNums; // key = element, value = index
        vector<int> returnThis;

        for (int i_1 = 0; i_1 < nums.size(); i_1++) {
            int el_1 = nums[i_1];
            int el_2 = target - el_1; 

            // If found in unordered_map
            if (allPrevNums.find(el_2) != allPrevNums.end()) {
                int i_2 = allPrevNums[el_2];
                returnThis.push_back(i_1);
                returnThis.push_back(i_2);
                break;
            }
            // If not found in unordered_map
            else {
                allPrevNums[el_1] = i_1;
            }
        }
        return returnThis;
    }
};
