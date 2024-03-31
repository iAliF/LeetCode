from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l = len(nums)

        for m, x in enumerate(nums):
            for n in range(m + 1, l):
                if x + nums[n] == target:
                    return [m, n]


