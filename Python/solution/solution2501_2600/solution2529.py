# Solution 2529

class Solution(object):
    def maximumCount(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        neg = 0
        pos = 0
        for x in nums:
            if x < 0:
                neg += 1
            elif x > 0:
              pos += 1
        return max(neg, pos)




