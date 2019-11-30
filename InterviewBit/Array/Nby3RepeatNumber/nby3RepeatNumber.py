from collections import defaultdict
class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        A=list(A)
        n=len(A)
        thresh=n//3
        count=defaultdict(lambda: 0)
        for i in range(n):
            count [A[i]]+=1
            if count [A[i]]>thresh:
                return A[i]
        return -1