class Solution:
    # @param A : string
    # @param B : integer
    # @return a list of integers
    def findPerm(self, A, B):
        first = 1
        last = B
        
        res = []
        
        for i in A:
            if i=='D':
                res.append(last)
                last-=1
            else:
                res.append(first)
                first+=1
        res.append(first)
        return res