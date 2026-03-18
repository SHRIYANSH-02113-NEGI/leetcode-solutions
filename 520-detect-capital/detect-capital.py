class Solution(object):
    def detectCapitalUse(self, word):
        n = len(word)
        if word == word.upper():
            return True
        if word == word.lower():
            return True
        if word[0].isupper():
            for i in range(1, n):
                if not word[i].islower():
                    return False
            return True
        
        return False