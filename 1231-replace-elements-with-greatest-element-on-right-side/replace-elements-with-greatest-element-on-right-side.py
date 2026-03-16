class Solution(object):
    def replaceElements(self, arr):
        largesttillnow = arr[-1]
        n = len(arr)
        if n == 1:
            return [-1]
        arr[n-1] = -1
        for i in range(n-2, -1, -1):
            temp = arr[i]
            arr[i] = largesttillnow
            largesttillnow = max(largesttillnow, temp)

        return arr