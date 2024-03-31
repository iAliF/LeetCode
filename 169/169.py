from typing import List


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        for x in set(nums):
            if nums.count(x) > n / 2: return x
