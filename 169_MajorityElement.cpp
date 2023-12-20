class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> eachNumCount; // key = element, value = count

        for(int el : nums) {
            eachNumCount[el] += 1;
        }
        int maxCount = 0;
        int majorityElement = NULL;

        for(int el : nums) {
            int currentCount = eachNumCount[el];

            if (currentCount > maxCount) {
                maxCount = currentCount;
                majorityElement = el;
            }
        }
        return majorityElement;
    }
};
