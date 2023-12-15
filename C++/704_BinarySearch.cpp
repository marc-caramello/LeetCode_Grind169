class Solution {
private:
    pair<int,int> currentIndices;
    int midpoint_i;
    int midpoint_el;

    int checkBothCurrentIndices(vector<int>& nums, int target) {
        if(isMatchFound(nums, target, currentIndices.first)) {
            return currentIndices.first;
        }
        else if(isMatchFound(nums, target, currentIndices.second)) {
            return currentIndices.second;
        }
        return -1;
    }

    bool isLastIndex() {
        if(currentIndices.first == currentIndices.second) {
            return true;
        }
        return false;
    }

    bool isMatchFound(vector<int>& nums, int target, int currentIndex) {
        int currentElement = nums[currentIndex];

        if(currentElement == target) {
            return true;
        }
        return false;
    }

    int calculateMidpoint_i() {
        int stepsBetween = currentIndices.second - currentIndices.first;
        
        int stepsForward;
        bool isEven = (stepsBetween % 2 == 0);

        if(isEven) {
            stepsForward = (stepsBetween / 2);
        }
        else {
            stepsForward = stepsBetween / 2 + 1;
        }
        return (currentIndices.first + stepsForward);
    }

    void calculateNewIndices(int target) {
        if(midpoint_el < target) {
            currentIndices.first = midpoint_i;
            currentIndices.first += potentialIncrement(target);
        }
        else if(midpoint_el > target) {
            currentIndices.second = midpoint_i;
            currentIndices.second += potentialIncrement(target);
        }
        else {
            currentIndices.first = midpoint_i;
            currentIndices.second = midpoint_i;
        }
    }

    int potentialIncrement(int target) {
        bool isLastIteration = (currentIndices.second - currentIndices.first == 1);
        bool isMovingRight = (midpoint_el < target); 
        bool isMovingLeft = (midpoint_el > target);

        if(isLastIteration && isMovingRight) {
            return 1;
        }
        else if(isLastIteration && isMovingLeft) {
            return -1;
        }
        return 0;
    }
public:
    int search(vector<int>& nums, int target) {
        currentIndices.first = 0;
        currentIndices.second = nums.size() - 1;
        int finalIndex;
        do {
            finalIndex = checkBothCurrentIndices(nums, target);

            if(isLastIndex()) {
                break;
            }
            midpoint_i = calculateMidpoint_i();
            midpoint_el = nums[midpoint_i];
            calculateNewIndices(target);
        } while(finalIndex == -1);

        return finalIndex;
    }
};
