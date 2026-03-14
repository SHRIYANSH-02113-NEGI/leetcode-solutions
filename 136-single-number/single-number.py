class Solution(object):
    def singleNumber(self, nums):
        arr = sorted(nums)
        
        if len(arr) == 1:
            return arr[0]

        for i in range(1, len(arr)-1):
            if arr[i] != arr[i+1] and arr[i] != arr[i-1]:
                return arr[i]

        if arr[0] != arr[1]:
            return arr[0]

        return arr[-1]