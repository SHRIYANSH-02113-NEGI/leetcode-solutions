class Solution(object):
    def singleNumber(self, nums):
        freq = {}

        for num in nums:
            if num not in freq:
                freq[num] = 1
            else:
                freq[num] = freq[num] + 1

        for key, value in freq.items():
            if value == 1:
                return key