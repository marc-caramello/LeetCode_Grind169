class Solution {
public:
    int hammingWeight(uint32_t n) {
        string binaryStr = bitset<32>(n).to_string();
        int numOfOnes = 0;

        for(char letter : binaryStr) {
            if(letter == '1') {
                numOfOnes++;
            }
        }
        return numOfOnes;
    }
};
