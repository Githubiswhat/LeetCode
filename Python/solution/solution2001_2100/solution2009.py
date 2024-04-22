# Solution 2009
class Solution(object):
    def minOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        a = sorted(set(nums))
        ans = left = 0

        for i, x in enumerate(a):
            while a[left] < a[i] + n - 1:
                left += 1
            ans = max(ans, i - left + 1)
        return n - ans

