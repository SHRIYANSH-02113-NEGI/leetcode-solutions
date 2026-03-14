class Solution(object):
    def arrayRankTransform(self, arr):
        rank_map = {}
        rank = 1
        for num in sorted(arr):
            if num not in rank_map:
                rank_map[num] = rank
                rank += 1  
        finalss = []
        for num in arr:
            finalss.append(rank_map[num])
        return finalss