class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        cache = {}

        for i,el in enumerate(nums):
            el_2 = target - el
            
            if(el_2 in cache):
                i_2 = cache[el_2]
                return [i_2, i]
            cache[el] = i
        return []
