class Solution(object):
    def destCity(self, paths):
        dict1={}
        n=len(paths)
        i=0
        for i in paths:
            source=i[0]
            dict1[source]=1

        for i in paths:
            dest=i[1]
            if dest not in dict1:
                return dest
        
        return ""
        