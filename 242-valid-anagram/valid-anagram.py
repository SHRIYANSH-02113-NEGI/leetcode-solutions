class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False
        
        dict1 = {}

        for ch in s:
            dict1[ch] = dict1.get(ch, 0) + 1

        for ch in t:
            if ch not in dict1:
                return False
            dict1[ch] -= 1

        for val in dict1.values():
            if val != 0:
                return False
        
        return True