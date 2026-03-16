class Solution(object):
    def replaceElements(self, arr):
        max_right = -1
        for i in range(len(arr)-1, -1, -1):
            newMax = max(max_right, arr[i])
            arr[i] = max_right
            max_right = newMax    
        return arr